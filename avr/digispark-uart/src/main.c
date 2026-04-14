/**
 *---------------------------------------------------------------------------
 * @brief    A simple example using USI as uart.
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-13
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------
#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>

#include "usi-uart.h"
#include "def_avr.h"

// Macros -------------------------------------------------------------------

// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------


// Code ---------------------------------------------------------------------


static void blink(void) {
    
    BOARD_LED_ON();
    _delay_ms(200);
    BOARD_LED_OFF();
    _delay_ms(200);

}

static void hw_init(void) {
    
    BOARD_LED_INIT();
    blink();
    blink();
    
    usi_uart_init();
    sei();  // Enable all interrupts
}

int main(void) {

    hw_init();

    while (true) {
        _delay_ms(200);
        usi_uart_send('A');
    }

    return 0;
}
