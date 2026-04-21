/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   LEF configuration file
 *
 * @file    LEF_config.h
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


// Event queue settings ---------------------------------------------------

#define LEF_QUEUE_LENGTH                10  /**< Length of LEF std queue */

// Cli settings -----------------------------------------------------------
#define LEF_CLI_BUF_LENGTH              32  /**< Length of CLI input buffer */
#define LEF_CLI_PROMPT            "LEF > "

#define LEF_CLI_CMD_LENGTH              12
#define LEF_CLI_DESC_LENGTH             32
#define LEF_CLI_HISTORY                 10 /**< Number of previous commands to store in history */


// Buzzer settings --------------------------------------------------------

#define LEF_BUZZER_BEEP_DURATION        40  // (ticks)
#define LEF_BUZZER_SHORT_BEEP_DURATION  10  // (ticks)
#define LEF_BUZZER_BLIP_DURATION         2  // (ticks)
#define LEF_BUZZER_LONG_BEEP_DURATION   80  // (ticks)
#define LEF_BUZZER_PAUSE                15  // (ticks)

// Led settings -----------------------------------------------------------

#define LED_SLOW_BLINK_DURATION        100  // (ticks)
#define LED_BLINK_DURATION              40  // (ticks)
#define LED_FAST_BLINK_DURATION          5  // (ticks)
 
#define LED_SINGLE_BLINK_DURATION       10  // (ticks)

#define LED_BLIP_DURATION                1  // (ticks)
#define LED_BLIP_PAUSE                 150  // (ticks)

#define LED_SLOW_BLIP_DURATION           1  // (ticks)
#define LED_SLOW_BLIP_PAUSE            300  // (ticks)

// Analog Led settings ----------------------------------------------------

#define LEDA_BLINK_DURATION             40  // (ticks)
#define LEDA_FAST_BLINK_DURATION         5  // (ticks)
#define LEDA_SINGLE_BLINK_DURATION       5  // (ticks)

#define LEDA_STEP                        5
#define LEDA_MAX                       180
	
// LedRG settings ---------------------------------------------------------

#define LEDRG_BLINK_PERIOD              30  // (cycles)
#define LEDRG_FAST_BLINK_PERIOD          5  // (cycles)
#define LEDRG_SINGLE_BLINK_PERIOD        5  // (cycles)


#ifdef __cplusplus
} //end brace for extern "C"
#endif


