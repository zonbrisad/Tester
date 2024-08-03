/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution.
 *
 *---------------------------------------------------------------------------
 * @brief   Main LEF file
 *
 * @file    LEF.h
 * @author  Your Name <your.name@yourdomain.org>
 * @date    2016-11-30
 * @license GPLv2
 *
 *---------------------------------------------------------------------------
 *
 * LEF is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  Full license text is available on the following
 *
 * https://github.com/zonbrisad/LEF
 *
 * 1 tab = 2 spaces
 */

#ifndef LEF_H
#define LEF_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------	
#include <stdint.h>
#include <stdbool.h>
	
// AVR specific includes
#ifdef __AVR__	
#include <util/atomic.h>
#include <avr/pgmspace.h>
#endif

#include "LEF_Config.h"

#include "LEF_Queue.h"
#include "LEF_Timer.h"
#include "LEF_Led.h"
#include "LEF_LedRG.h"
#include "LEF_Buzzer.h"
#include "LEF_Button.h"
#include "LEF_Rotary.h"
#include "LEF_Cli.h"
	
// Controls --------------------------------------------------------------

#ifndef LEF_QUEUE_LENGTH
#error "LEF_QUEUE_LENGTH not defined."
#endif
	
// Events ----------------------------------------------------------------

#define LEF_EVENT_CLI     250
#define LEF_EVENT_TEST    254
#define LEF_SYSTICK_EVENT 255

	
// Macros -----------------------------------------------------------------
	
#define LEF_ATOMIC_BLOCK()
	
// 
#define lefprintf(...)   printf( __VA_ARGS__)
#define lefstrcpy(d, s)  strcpy(d,s)
 

// if avr GCC use printf_P to store format strings in flash instead of RAM
#ifdef __AVR__   

#undef LEF_ATOMIC_BLOCK
#define LEF_ATOMIC_BLOCK() ATOMIC_BLOCK(ATOMIC_FORCEON)
	
//#undef lefprintf
//#define lefprintf(fmt, ...)  printf_P(PSTR(fmt), ##__VA_ARGS__)

#undef lefstrcpy
#define lefstrcpy(d, s)  strcpy_P(d,s)	
#endif

#define LARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0])) 

	
// For compability with older code, remove in future
#define LEF_QueueStdSend(event) LEF_Send(event)
#define LEF_QueueStdWait(event) LEF_Wait(event)
#define LEF_QueueStdClear()     LEF_Clear()
#define LEF_QueueStdCnt()       LEF_Count()


	
// Critical Section -------------------------------------------------------

#define LEF_EnterCritical()  \
		asm volatile ( "in    __tmp_reg__, __SREG__" :: );  \
        asm volatile ( "cli" :: );                \
        asm volatile ( "push  __tmp_reg__" :: )

#define LEF_ExitCritical() \
		asm volatile ( "pop   __tmp_reg__" :: );        \
        asm volatile ( "out   __SREG__, __tmp_reg__" :: )

#define LEF_DisableInterrupts()  asm volatile ( "cli" :: );
#define LEF_EnableInterrupts()   asm volatile ( "sei" :: );

// Architectural specifics ------------------------------------------------
#define LEF_portNOP  asm volatile ( "nop" );
	
	
	
// Typedefs ---------------------------------------------------------------
	
// Variables --------------------------------------------------------------

extern LEF_EventQueue StdQueue;
	
// Functions --------------------------------------------------------------


void LEF_Init(void);

void LEF_Print_event(LEF_queue_element *event);



/**
 *
 */
//void LEF_QueueStdSend(LEF_Event *event);

/**
 * Wait for
 * @param event
 */
//void LEF_QueueStdWait(LEF_Event *event);

	
//void LEF_QueueStdClear(void);

//uint16_t LEF_QueueStdCnt(void);

	
void LEF_Send(LEF_Event *event);

/**
 * Wait for
 * @param event
 */
void LEF_Wait(LEF_Event *event);

	
void LEF_Clear(void);

uint16_t LEF_Count(void);

	



	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

