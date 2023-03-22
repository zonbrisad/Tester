/**
 *---------------------------------------------------------------------------
 * @brief   Makeplates main example file.
 *
 * @file    main.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-10-24
 * @license GPLv2
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/wdt.h>
#include <avr/pgmspace.h>
#include <avr/io.h>
	
#include "def.h"
#include "def_avr.h"
//#include "uart.h"
#include "avrsimul.h"

#include "FreeRTOS.h"
#include "queue.h"

// Macros -----------------------------------------------------------------

#define PROG_NAME     "avrfreertos"
#define PROG_VERSION  "0.1"
#define PROG_INFO     "VERSION"
#define PROG_LICENSE 


// Variables --------------------------------------------------------------
static FILE mystdout = FDEV_SETUP_STREAM(simul_putchar, NULL, _FDEV_SETUP_WRITE);
//static FILE mystdout = FDEV_SETUP_STREAM(uart_putc, uart_getc, _FDEV_SETUP_WRITE);

volatile int timer2_ticks;

xQueueHandle queue1;


//xTimerHandle timer1;
//TimerHandle timer1;




// Prototypes -------------------------------------------------------------
void hw_init(void);

void Task1(void *pvParameters);
void Task2(void *pvParameters);

void printInfo(void);


// Code -------------------------------------------------------------------

void Task1(void *pvParameters) {
	UNUSED(pvParameters);
	printf("Task1 XXX\n");
	while (1) {

	}
}

void Task2(void *pvParameters) {
	UNUSED(pvParameters);
	printf("Task2 YYY\n");
	while (1) {

	}
}



/* Every ~ms */
ISR(TIMER2_COMPA_vect) {
			vPortYieldFromTick();
	   timer2_ticks++;
}

void hw_init(void) {
	//wdt_disable();                            // disable watchdog timer
	stdout = &mystdout;                       // configure stdout to UART 0
	
	ARD_LED_INIT();
	ARD_LED_ON();
	
//	uart_init(UART_BAUD_SELECT(UART_BAUD_RATE,F_CPU));      // init uart
	
	timer2_ticks = 0;
	/* Set up our timers and enable interrupts */
	TCNT2 = 0;    /* Timer 1 by CLK/64 */
	OCR2A = 115;   /* ~1ms */
	TIMSK2 = _BV(OCIE2A);
	TCCR2B |= (1 << CS11) | (1 << CS10) ; 
	sei();
}


void printInfo(void) {
	printf("Makeplate AVR FreeRTOS example\n\n");
	printf("Target:  %s \n", STRINGIZE(TARGET));
	printf("Version: %s\n",  STRINGIZE(VERSION));
}


void printErrorMsg(char *msg, int err) {
	printf("%s ", msg);
	switch (err) {
	 case pdPASS:
		printf("Success\n");
		break;
	 case pdFAIL:
		printf("Fail\n");
		break;
	 case errCOULD_NOT_ALLOCATE_REQUIRED_MEMORY:
		printf("Failed to allocate memory\n");
		break;
//	 case errNO_TASK_TO_RUN:
//		printf("No Task to run\n");
		break;
	 case errQUEUE_BLOCKED:
		printf("Queue blocked\n");
		break;
	 case errQUEUE_YIELD:
		printf("Queue yield\n");
		break;
	 default: printf("\n");
	}
}


typedef enum {
	EV_1,
	EV_2,
} EVENTS;

int main(void) {
	volatile int tmp;
	int res;
	
	hw_init();
	
//	printInfo();

	
	// Starting Task 1
	res = xTaskCreate( Task1, "Task1", 128, NULL, 3, NULL);
	printErrorMsg("Starting Task1:", res);

	res = xTaskCreate( Task2, "Task2", 128, NULL, 3, NULL);
	printErrorMsg("Starting Task2:", res);

	// Creating main event queue
	//queue1 = xQueueCreate( 5, sizeof(EVENTS));
	
	//configASSERT(0);
	 
	 printf("Starting FreeRTOS scheduler\n");
	 
	 vTaskStartScheduler();
	 
	 // Should never come here
	 return 0;
	
	while (1) {
		tmp = timer2_ticks;
		printf("Timer counter %d\n", tmp);
//		printf("Input char %c\n", simul_getchar());
		_delay_ms(100);
		ARD_LED_TOGGLE();
	}

  return 0;
}
