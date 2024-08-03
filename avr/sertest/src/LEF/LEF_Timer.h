/**
 * LEF - Lightweiht Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A software timer for LEF.
 *
 * @file    LEF_Timer.h
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

#ifndef LEF_TIMER_H
#define LEF_TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

typedef struct {
	LEF_EventId id;
  uint16_t counter;
  uint16_t reload;

} LEF_Timer;


// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------



/**
 * API
 * --------------------------------------------------------------------------
 */

void LEF_TimerInit(LEF_Timer *timer, LEF_EventId id);

void LEF_TimerStartRepeat(LEF_Timer *timer, uint16_t ticks);

void LEF_TimerStartSingle(LEF_Timer *timer, uint16_t ticks);

void LEF_TimerStop(LEF_Timer *timer);
	
//void LEF_TimerUpdate(LEF_Timer *timer, LEF_EventId event);
void LEF_TimerUpdate(LEF_Timer *timer);

//void LEF_TimerReset(LEF_Timer *timer);



#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

