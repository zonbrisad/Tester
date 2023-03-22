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

#define UART_BAUD_RATE 9600
// static FILE mystdout = FDEV_SETUP_STREAM(uart_putc, uart_getc, _FDEV_SETUP_WRITE);

void hw_init(void)
{
	DDRD |= (0x1 << PD1);
	uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));
	sei();
	ARD_LED_INIT();
}

int main()
{
	hw_init();
	_delay_ms(200);
	uart_puts("Starting up blink program\n");
	while (1)
	{
		_delay_ms(100);
		uart_putc('B');
		ARD_LED_TOGGLE();
	}

	return 0;
}
