/**
 *---------------------------------------------------------------------------
 * @brief    A simple hello world example over USB.
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-23
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "pico/stdlib.h"
#include "main.h"

// Macros -------------------------------------------------------------------


// Prototypes ---------------------------------------------------------------


// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------
const uint LED_PIN = 25;

// Code ---------------------------------------------------------------------


static void hw_init(void) {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    stdio_init_all();
}

int main(void) {

    hw_init();

    while (true) {
        printf("Hello, world!\n");
        gpio_put(LED_PIN, !gpio_get(LED_PIN));
        sleep_ms(1000);
    }

    return 0;
}
