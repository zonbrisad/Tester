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
 * 
 */

// Includes ---------------------------------------------------------------

#include "LEF.h"
#include "LEF_Led.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

void LEF_Led_init(LEF_Led *led, LED_STATES mode) {
	led->cnt = 0;
	LEF_Led_set(led, mode);
}

uint8_t LEF_Led_update(LEF_Led *led) {
	led->cnt++;
	switch (led->mode) {
		case LED_ON:  return 1; break;
		case LED_OFF: return 0; break;
		case LED_SINGLE_BLINK:
			if (led->cnt > 0)
				led->mode = LED_OFF;
			return 1;
			break;
		case LED_DOUBLE_BLINK:
			if (led->cnt > LED_SINGLE_BLINK_DURATION) {
				led->mode = LED_SINGLE_BLINK;
				led->cnt = -LED_SINGLE_BLINK_DURATION;
			}
			return (led->cnt < 0) ? 1 : 0;
			break;
		case LED_TRIPPLE_BLINK:
			if (led->cnt > LED_SINGLE_BLINK_DURATION) {
				led->mode = LED_DOUBLE_BLINK;
				led->cnt = -LED_SINGLE_BLINK_DURATION;
			}
			return (led->cnt < 0) ? 1 : 0;
			break;
		case LED_FAST_BLINK:
			if (led->cnt > LED_FAST_BLINK_DURATION) 
				led->cnt = -LED_FAST_BLINK_DURATION;
			break;
		case LED_BLINK:
			if (led->cnt > LED_BLINK_DURATION) 
				led->cnt = -LED_BLINK_DURATION;
			break;
		case LED_SLOW_BLINK:
			if (led->cnt > LED_SLOW_BLINK_DURATION) 
				led->cnt = -LED_SLOW_BLINK_DURATION;
			break;
		case LED_BLIP:
			if (led->cnt > LED_BLIP_PAUSE)  // Blip is a very short blink
				led->cnt = -LED_BLIP_DURATION; 
			break;
		case LED_SLOW_BLIP:
			if (led->cnt > LED_SLOW_BLIP_PAUSE)  // Blip is a very short blink
				led->cnt = -LED_SLOW_BLIP_DURATION; 
			break;
				
		default: return 0;
	}
	return (led->cnt<0) ? 1 : 0;
}

void LEF_Led_set(LEF_Led *led, LED_STATES state) {
	led->mode = state;
	switch (state) {
		case LED_BLINK:
	 	case LED_FAST_BLINK:
			led->cnt = -LED_BLINK_DURATION;
			break;
	 	case LED_SINGLE_BLINK:
			led->cnt = -LED_SINGLE_BLINK_DURATION;
			break;
		case LED_DOUBLE_BLINK:
			led->cnt = -LED_SINGLE_BLINK_DURATION;
			break;
		case LED_TRIPPLE_BLINK:
			led->cnt = -LED_SINGLE_BLINK_DURATION;
			break;
		case LED_BLIP:
			led->cnt = -LED_BLIP_DURATION; // Blip is a very short blink
			break;
		case LED_SLOW_BLIP:
			led->cnt = -LED_SLOW_BLIP_DURATION; // Blip is a very short blink
			break;

	 default:break;
	}
}
