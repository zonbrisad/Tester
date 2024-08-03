/**
 * LEF - Lightweiht Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A software timer for LEF.
 *
 * @file    LEF_Timer.c
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

// Includes ---------------------------------------------------------------
#include "LEF.h"
#include "LEF_Timer.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------


void LEF_TimerInit(LEF_Timer *timer, LEF_EventId id) {
	timer->id = id;
  timer->counter = 0;
  timer->reload   = 0;
}


void LEF_TimerUpdate(LEF_Timer *timer) {
	LEF_queue_element qe;

  ATOMIC_BLOCK(ATOMIC_FORCEON) {
  if (timer->counter>0) {
    timer->counter--;
    if (timer->counter==0) {
			qe.id = timer->id;
			qe.func = 0;
    	LEF_QueueStdSend(&qe);
      if (timer->reload>0)
        timer->counter = timer->reload;
    }
  }
  }
}


void LEF_TimerStartRepeat(LEF_Timer *timer, uint16_t ticks) {
  ATOMIC_BLOCK(ATOMIC_FORCEON) {
    timer->reload   = ticks;
    timer->counter  = ticks;
  }
}


void LEF_TimerStartSingle(LEF_Timer *timer, uint16_t ticks) {
  ATOMIC_BLOCK(ATOMIC_FORCEON) {
      timer->reload   = 0;
      timer->counter = ticks;
    }
}


void LEF_TimerStop(LEF_Timer *timer) {
  ATOMIC_BLOCK(ATOMIC_FORCEON) {
        timer->reload   = 0;
        timer->counter  = 0;
      }
}
