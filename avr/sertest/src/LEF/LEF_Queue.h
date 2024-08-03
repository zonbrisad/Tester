/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   Queue functions
 *
 * @file    LEF_Queue.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-12-08
 * @license GPLv2
 *
 *---------------------------------------------------------------------------
 *
 * LEF is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  Full license text is available on the following
 *
 * Source repository:
 * https://github.com/zonbrisad/LEF
 *
 * 1 tab = 2 spaces
 */

#ifndef LEF_QUEUE_H
#define LEF_QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

#include "LEF.h"

// Macros -----------------------------------------------------------------


#define LEF_queue_element LEF_Event // Temporary macro until all instances changed
	
// Typedefs ---------------------------------------------------------------

typedef uint8_t LEF_EventId;

typedef struct {
	LEF_EventId id;
	uint8_t func;
} LEF_Event;


	
typedef struct {
	LEF_Event que[LEF_QUEUE_LENGTH];            // queue it self
	uint8_t head;
	volatile uint8_t cnt;                     // nr of elements in queue (i.e. not the size if the queue)
} LEF_EventQueue;

// Variables --------------------------------------------------------------

//extern LEF_EventQueue StdQueue;

// Functions --------------------------------------------------------------


void LEF_QueueClear(LEF_EventQueue *queue);

void LEF_QueueInit(LEF_EventQueue *queue);

void LEF_QueueSend(LEF_EventQueue *queue,  LEF_Event *event);

void LEF_QueueSendEvent(LEF_EventQueue *queue, LEF_EventId ev, void *data);

void LEF_QueueWait(LEF_EventQueue *queue, LEF_Event *event);

/**
 * Returns the number of events in the queue.
 */
uint16_t LEF_QueueCnt(LEF_EventQueue *queue);

/*
void LEF_QueueStdSend(LEF_Event *event);


void LEF_QueueStdWait(LEF_Event *event);

	
void LEF_QueueStdClear(void);

uint16_t LEF_QueueStdCnt(void);

*/

#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

