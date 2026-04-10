/**
 *---------------------------------------------------------------------------
 * @brief    Testprogram for blinking green LED on digispark module
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-03-15
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------

#include "main.h"

#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/sleep.h>
#include <avr/wdt.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <util/atomic.h>
#include <util/delay.h>

#include "def_avr.h"

// Code ---------------------------------------------------------------------

static void hw_init(void) {
    ARDUINO_LED_INIT();
    sei();  // Enable all interrupts
}

int main() {
    hw_init();
    while (true) {
        ARDUINO_LED_SET(true);
        _delay_ms(200);
        ARDUINO_LED_SET(false);
        _delay_ms(200);
    }
    return 0;
}
