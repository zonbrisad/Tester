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
 * 
 */

#pragma once

#if defined(__ARM_LINUX__) || defined(unix) || defined(__unix__) || defined(__unix)
#define LEF_SYSTEM_LINUX
#endif

#if defined(__AVR__)
#define LEF_SYSTEM_AVR
#endif

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------	
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
	
#ifdef LEF_SYSTEM_AVR
#include <util/atomic.h>
#include <avr/pgmspace.h>
#endif

#ifdef LEF_SYSTEM_LINUX
#include "LEF_linux.h"
#endif

#include "LEF_Config.h"
#include "LEF_Queue.h"
#include "LEF_Types.h"

// Controls --------------------------------------------------------------

#ifndef LEF_QUEUE_LENGTH
#error "LEF_QUEUE_LENGTH not defined."
#endif
	
// Events ----------------------------------------------------------------

#define LEF_ERROR         240
#define LEF_EVENT_CLI     250
#define LEF_EVENT_DELAY   251
#define LEF_EVENT_TEST    254
#define LEF_SYSTICK_EVENT 255

// Typedefs ---------------------------------------------------------------


// Macros -----------------------------------------------------------------

#ifdef LEF_SYSTEM_LINUX

#define LEF_ATOMIC_BLOCK()
#define lefprintf(...)   printf( __VA_ARGS__)
#define lefstrcpy(d, s)  strcpy(d,s)

#endif

// if avr GCC use printf_P to store format strings in flash instead of RAM
#ifdef LEF_SYSTEM_AVR

#undef LEF_ATOMIC_BLOCK
#define LEF_ATOMIC_BLOCK() ATOMIC_BLOCK(ATOMIC_FORCEON)
	
#undef lefprintf
#define lefprintf(fmt, ...)  printf_P(PSTR(fmt), ##__VA_ARGS__)

#undef lefstrcpy
#define lefstrcpy(d, s)      strcpy_P(d,s)
	
#endif

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
	
	
// Variables --------------------------------------------------------------

extern LEF_EventQueue lef_std_queue;

// Functions --------------------------------------------------------------


void LEF_init(void);

void LEF_Print_event(LEF_Event *event);
	
void LEF_Send(LEF_Event *event);

void LEF_Send_msg(LEF_EventId id, LEF_EventFunc func);

    /**
     * Wait for
     * @param event
     */
void LEF_Wait(LEF_Event* event);

void LEF_Clear(void);

void LEF_systick(void);

void LEF_Delay(uint16_t ticks);

uint16_t LEF_Count(void);

int LEF_Run(LEF_EventHandler main_event_handler,
            LEF_EventHandler pre_event_handler);

void LEF_print_sysinfo(void);

#ifdef LEF_SYSTEM_LINUX

/**
 * @brief Add system(Linux) timer
 *
 * @param name Name of timer
 * @param invervall Timer intervall in ms
 * @param callback Callback function for timer
 */
void LEF_add_systimer(char* name, size_t intervall, LEF_Callback callback);

#endif





#ifdef __cplusplus
} //end brace for extern "C"
#endif


