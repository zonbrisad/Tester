/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   Queue functions
 *
 * @file    LEF_Queue.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-12-08
 * @licence GPLv2
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

// Includes ---------------------------------------------------------------
#include "LEF.h"
#include "LEF_Queue.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------
//LEF_EventQueue StdQueue;

// Prototypes -------------------------------------------------------------

void LEF_element_cpy(LEF_Event *dst, LEF_Event *src);
uint8_t queue_ptr_inc(uint8_t ptr);

// Code -------------------------------------------------------------------


void LEF_QueueClear(LEF_EventQueue *queue) {
  queue->head = 0;
  queue->cnt  = 0;
}

void LEF_element_cpy(LEF_Event *dst, LEF_Event *src) {
  dst->id = src->id;
  dst->func = src->func;
}

void LEF_QueueInit(LEF_EventQueue *queue) {
	LEF_QueueClear(queue);
}

uint8_t queue_ptr_inc(uint8_t ptr) {
  return ptr % LEF_QUEUE_LENGTH;
}

void LEF_QueueSend(LEF_EventQueue *queue,  LEF_Event *event) {

//
//  if (queue->tail==255)         // detect initial condition and set to zero
//    queue->tail=0;

  if (queue->cnt==LEF_QUEUE_LENGTH)         // detect initial condition and set to zero
    return;

//  if (queue->tail==queue->head) // if queue is full return
//    return;

  LEF_ATOMIC_BLOCK() {
  //LEF_EnterCritical();
	  LEF_element_cpy(&queue->que[queue->head], event);

    queue->cnt++;
    queue->head++;
    if (queue->head>=LEF_QUEUE_LENGTH)
      queue->head = 0;
    }
   //LEF_ExitCritical();
}

void LEF_QueueWait(LEF_EventQueue *queue, LEF_Event *event) {

  while(queue->cnt==0) {               // wait until queue has an element
  }

  LEF_ATOMIC_BLOCK() {
	  LEF_element_cpy(event, &queue->que[(queue->head+(LEF_QUEUE_LENGTH-queue->cnt))%LEF_QUEUE_LENGTH]);
    queue->cnt--;
  }

}

/**
 * @todo add support for extra data
 */
void LEF_QueueSendEvent(LEF_EventQueue *queue, LEF_EventId ev, void *data) {
  LEF_Event event;
  (void) data;
  event.id = ev;
  LEF_QueueSend(queue, &event);
}


uint16_t LEF_QueueCnt(LEF_EventQueue *queue) {
  return queue->cnt;
}

/*
void LEF_QueueStdSend(LEF_Event *event) {
	return LEF_QueueSend(&StdQueue, event);
}

void LEF_QueueStdWait(LEF_Event *event) {
	return LEF_QueueWait(&StdQueue, event);
}

void LEF_QueueStdClear(void) {
	return LEF_QueueClear(&StdQueue);
}

uint16_t LEF_QueueStdCnt(void) {
  return LEF_QueueCnt(&StdQueue);
}
*/
