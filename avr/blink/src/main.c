/**
 *---------------------------------------------------------------------------
 * @brief    Blink program for arduino
 *
 * @file     main.c
 * @author   Peter Malmberg
 * @version
 * @date     2023-03-21
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
#include <util/delay.h>
#include <util/atomic.h>

#include "main.h"
#include "uart.h"
#include "def.h"


void hw_init(void);


#define UART_BAUD_RATE 9600
static FILE mystdout = FDEV_SETUP_STREAM(uart_putc, NULL, _FDEV_SETUP_WRITE);

void hw_init(void)
{
	stdout = &mystdout;
	DDRD |= (0x1 << PD1);
	uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));
	sei();
	ARDUINO_LED_INIT();
}

int main()
{
	hw_init();
	_delay_ms(500);
	printf("Starting up blink program\n");
	while (1)
	{
		_delay_ms(100);
		uart_putc('B');
		ARDUINO_LED_TOGGLE();
	}

	return 0;
}
