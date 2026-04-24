/**
 *---------------------------------------------------------------------------
 * @brief    Example showing how to use a timer to blink LED.
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-24
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------

#include "main.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "hardware/timer.h"
#include "pico/stdlib.h"

// Macros -------------------------------------------------------------------


// Prototypes ---------------------------------------------------------------


// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------

// Variables ----------------------------------------------------------------

const uint LED_PIN = 25;

// Code ---------------------------------------------------------------------


bool timer_callback(__unused struct repeating_timer *t) {
    gpio_put(LED_PIN, !gpio_get(LED_PIN));
    return true;
}


static void hw_init(void) {
    stdio_init_all();
    
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    struct repeating_timer timer;
    add_repeating_timer_ms(100, timer_callback, NULL, &timer);
}

int main(void) {
    hw_init();

    printf("Blinking LED on pin using repeating timer.\n");

    while (true) {
        printf("Timer cotrolled LED blink on Pico!\n");
        
        sleep_ms(1000);

    }

    return 0;
}
