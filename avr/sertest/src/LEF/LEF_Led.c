/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   LED controll library.
 *
 * @file    LEF_Led.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-11-30
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
#include "LEF_Led.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

void LEF_LedInit(LEF_Led *led, LED_STATES mode) {
//	led->mode = LED_OFF;
	led->cnt = 0;
	LEF_LedSetState(led, mode);
}

uint8_t LEF_LedUpdate(LEF_Led *led) {
	uint8_t limit;
	limit = 0;
	switch (led->mode) {
		case LED_OFF: return 0; break;
		case LED_ON:  return 1; break;
		case LED_FAST_BLINK:
			limit = LED_FAST_BLINK_DURATION - LED_BLINK_DURATION;
		case LED_BLINK:
			limit += LED_BLINK_DURATION;
			led->cnt++;

			if (led->cnt>limit) {
				led->cnt = - limit;
			}

			if (led->cnt<0)
				return 1;
			else
				return 0;

			break;
		case LED_SINGLE_BLINK:
		  led->cnt++;
		  if (led->cnt>LED_SINGLE_BLINK)
			  led->mode = LED_OFF;
		  return 1;
		break;

				
		default: return 0;
	}
}

void LEF_LedSetState(LEF_Led *led, LED_STATES state) {
	led->mode = state;
	switch (state) {
	 case LED_BLINK:
	 case LED_FAST_BLINK:
		led->cnt = - LED_BLINK_DURATION;
		break;
	 case LED_SINGLE_BLINK:
		led->cnt = 0;
		break;
	 default:break;
	}
}
