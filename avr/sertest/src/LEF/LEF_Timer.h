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
 * 
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------
#include "LEF.h"

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

void LEF_Timer_init(LEF_Timer *timer, LEF_EventId id);

void LEF_Timer_start_repeat(LEF_Timer *timer, uint16_t ticks);

void LEF_Timer_start_single(LEF_Timer *timer, uint16_t ticks);

void LEF_Timer_stop(LEF_Timer *timer);
	
void LEF_Timer_update(LEF_Timer *timer);

//void LEF_Timer_reset(LEF_Timer *timer);

#ifdef __cplusplus
} //end brace for extern "C"
#endif


