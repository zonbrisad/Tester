/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A simple driver for an active buzzer.
 *
 * @file    LEF_Buzzer.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-12-09
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

#ifndef LEF_BUZZER_H
#define LEF_BUZZER_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------
#include "LEF.h"
	
// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------
typedef enum {
	LEF_BUZZER_OFF = 0,
	LEF_BUZZER_ON,
	LEF_BUZZER_BEEP,
	LEF_BUZZER_BLIP,
	LEF_BUZZER_SHORT_BEEP,
	LEF_BUZZER_LONG_BEEP,
	LEF_BUZZER_DOUBLE_BEEP,
	LEF_BUZZER_TRIPPLE_BEEP,
	LEF_BUZZER_BRP, 
} LEF_Buzzer_mode;

//#define BUZZER_OFF 0,0,0
//#define BUZZER_ON  1,0,0
	
// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

void LEF_Buzzer_init(void);
	
void LEF_Buzzer_set(LEF_Buzzer_mode state);

void LEF_Buzzer(uint16_t duration, uint16_t pause, uint16_t repeat);
	
bool LEF_Buzzer_update(void);
	
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

