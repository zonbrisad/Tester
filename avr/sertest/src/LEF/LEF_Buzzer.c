/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A basic buzzer driver.
 *
 * @file    LEF_Buzzer.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-12-09
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

#include "LEF_Buzzer.h"
#include "LEF.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

//typedef LEF_Buzzer_


uint16_t buz_cnt;
uint16_t buz_rep;

uint16_t buz_duration;
uint16_t buz_pause;
uint16_t buz_repeat;

LEF_Buzzer_mode buz_state;

void LEF_Buzzer_init() {
	buz_state = LEF_BUZZER_OFF;
  buz_cnt   = 0;

	buz_duration = 0;
	buz_pause = 0;
	buz_repeat = 0;
}

void LEF_Buzzer_set(LEF_Buzzer_mode state) {
	if (buz_state == state)
		return;
	
	buz_cnt = 0;
	buz_rep = 0;
	buz_state = state;	
}

void LEF_Buzzer(uint16_t duration, uint16_t pause, uint16_t repeat) {
	buz_duration = duration;
	buz_pause = pause;
	buz_repeat = repeat;

	buz_cnt = 0;
	buz_rep = 0;
}

int8_t LEF_Beep(uint16_t duration, uint16_t pause, uint16_t repeat);

int8_t LEF_Beep(uint16_t duration, uint16_t pause, uint16_t repeat) {
	
	buz_cnt++;
	if (buz_cnt <= duration) {
		return 1;
	}
	if ((buz_cnt > duration) && (buz_cnt < (duration+pause))) {
		return 0;
	}
	if (buz_cnt >= (duration+pause)) {
		buz_cnt = 0;
		buz_rep++;
	}
	if (buz_rep >= (repeat)) {
		buz_state = LEF_BUZZER_OFF;
		buz_duration = 0;
		buz_pause = 0;
		buz_repeat = 0;
	}

	return 0;
}

bool LEF_Buzzer_update() {
/*	
	if ((buz_duration+buz_pause+buz_repeat) == 0)
		return 0;

	if ((buz_duration+buz_pause+buz_repeat) == 1)
		return 1;
		
	LEF_Beep(buz_duration, buz_pause, buz_repeat);	
*/	
	switch (buz_state) {
	 case LEF_BUZZER_OFF: buz_cnt = 0; return 0; break;
	 case LEF_BUZZER_ON: return 1; break;
	 case LEF_BUZZER_SHORT_BEEP:
		return LEF_Beep(LEF_BUZZER_SHORT_BEEP_DURATION, 0, 1);
		break;
		
	 case LEF_BUZZER_BEEP:
		return LEF_Beep(LEF_BUZZER_BEEP_DURATION, 0, 1);
		break;

	 case LEF_BUZZER_BLIP:
		return LEF_Beep(LEF_BUZZER_BLIP_DURATION, 0, 1);
		break;

		
	 case LEF_BUZZER_LONG_BEEP:
		return LEF_Beep(LEF_BUZZER_LONG_BEEP_DURATION, 0, 1);
		break;
		
	 case LEF_BUZZER_DOUBLE_BEEP:
		return LEF_Beep(LEF_BUZZER_BEEP_DURATION, LEF_BUZZER_PAUSE, 2);
		break;

	 case LEF_BUZZER_TRIPPLE_BEEP:
		return LEF_Beep(LEF_BUZZER_BEEP_DURATION, LEF_BUZZER_PAUSE, 3);
		break;

	 case LEF_BUZZER_BRP:
		return LEF_Beep(1, 1, 20);
		break;

		
	 default: break; //return 0;
		
	}
	return 0;
}
