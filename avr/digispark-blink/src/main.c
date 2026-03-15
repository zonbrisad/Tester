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

#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "main.h"
#include "def_avr.h"

// Macros -------------------------------------------------------------------


// Prototypes ---------------------------------------------------------------

void hw_init(void);

// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------


// Code ---------------------------------------------------------------------


void hw_init(void) {
  // DDRB |= (1<<PB1);
  ARDUINO_LED_INIT();
  sei();  // Enable all interrupts
} 
int main() {

  hw_init();
  while(true) {
    ARDUINO_LED_SET(true);
    _delay_ms(100);
    ARDUINO_LED_SET(false);
    _delay_ms(100);
    // PORTB |= (1<<PB1);
    // _delay_ms(100);
    // PORTB &= ~(1<<PB1);
    // _delay_ms(100);
  }
  return 0;
}
