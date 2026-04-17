/**
 * LEF - Lightweight Event Framework
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
 * 
 */

// Includes ---------------------------------------------------------------
#include "LEF.h"
#include "LEF_Timer.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

void LEF_Timer_init(LEF_Timer* timer, LEF_EventId id) {
    timer->id = id;
    timer->counter = 0;
    timer->reload = 0;
    timer->func = 0;
}

void LEF_Timer_update(LEF_Timer* timer) {
    LEF_ATOMIC_BLOCK() {
        if (timer->counter > 0) {
            timer->counter--;
            if (timer->counter == 0) {
                LEF_Send_msg(timer->id, timer->func);
                if (timer->reload > 0) timer->counter = timer->reload;
            }
        }
    }
}

void LEF_Timer_start_repeat(LEF_Timer* timer, uint16_t ticks) {
    LEF_ATOMIC_BLOCK() {
        timer->reload = ticks;
        timer->counter = ticks;
    }
}

void LEF_Timer_start_single_msg(LEF_Timer* timer, uint16_t ticks,
                                LEF_EventFunc func) {
    timer->func = func;
    LEF_ATOMIC_BLOCK() {
        timer->reload = 0;
        timer->counter = ticks;
    }
}

void LEF_Timer_start_single(LEF_Timer* timer, uint16_t ticks) {
    LEF_Timer_start_single_msg(timer, ticks, 0);
}

void LEF_Timer_stop(LEF_Timer* timer) {
    LEF_ATOMIC_BLOCK() {
        timer->reload = 0;
        timer->counter = 0;
    }
}
