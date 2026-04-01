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
 * 
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include "LEF.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

LEF_EventQueue lef_std_queue;

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------


void LEF_init(void) {

	// initiate LEF standard queue
	LEF_QueueInit(&lef_std_queue);
}


void LEF_Send(LEF_Event *event) {
	return LEF_QueueSend(&lef_std_queue, event);
}

void LEF_Wait(LEF_Event *event) {
	return LEF_QueueWait(&lef_std_queue, event);
}

void LEF_Clear(void) {
	return LEF_QueueClear(&lef_std_queue);
}

uint16_t LEF_Count(void) {
  return LEF_QueueCnt(&lef_std_queue);
}



void LEF_Print_event(LEF_Event *event) {
	printf("Event id: %3d   func: %3d\n", event->id, event->func);
}
