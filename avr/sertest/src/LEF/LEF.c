/**
 * LEF - Lightweiht Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   Main LEF file
 *
 * @file    LEF.c
 * @author  Your Name <your.name@yourdomain.org>
 * @date    2016-11-30
 * @licence GPLv2
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

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include "LEF.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

LEF_EventQueue StdQueue;

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------


void LEF_Init(void) {

	// initiate LEF standard queue
	LEF_QueueInit(&StdQueue);
}


void LEF_Send(LEF_Event *event) {
	return LEF_QueueSend(&StdQueue, event);
}

void LEF_Wait(LEF_Event *event) {
	return LEF_QueueWait(&StdQueue, event);
}

void LEF_Clear(void) {
	return LEF_QueueClear(&StdQueue);
}

uint16_t LEF_Count(void) {
  return LEF_QueueCnt(&StdQueue);
}



void LEF_Print_event(LEF_queue_element *event) {
	printf("Event id: %3d   func: %3d\n", event->id, event->func);
}
