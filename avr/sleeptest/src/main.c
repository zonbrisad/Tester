/**
 *---------------------------------------------------------------------------
 * @brief    Test of AVR sleep function
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-03-31
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>
#include <stdio.h>
#include <stdlib.h>
#include "uart.h"
#include "main.h"

#define UART_BAUD_RATE 9600

void hw_init(void);


static FILE mystdout = FDEV_SETUP_STREAM((void*)uart_putc, NULL, _FDEV_SETUP_WRITE);

void hw_init(void) {
  stdout = &mystdout;
	
  uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));

	set_sleep_mode(SLEEP_MODE_IDLE);
	sleep_enable();
	
  sei();  // Enable all interrupts
}

int main() {
  hw_init();

	printf("Starting up AVR sleeptest\n");

	while(1) {
		
		sleep_cpu();
		printf("Received character\n");
	}
	
  return 0;
}
