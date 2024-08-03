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
 * 1 tab = 2 spaces
 */

#ifndef LEF_CONFIG_H
#define LEF_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif




// StdQue settings --------------------------------------------------------

#define LEF_QUEUE_LENGTH 10  /**< Length of LEF std queue */

	
// Cli settings -----------------------------------------------------------

#define LEF_CLI_BUF_LENGTH   32
#define LEF_CLI_PROMPT      "ASPT > "

#define LEF_CLI_CMD_LENGTH   12
#define LEF_CLI_DESC_LENGTH  32


// Buzzer settings --------------------------------------------------------

#define LEF_BUZZER_BEEP_DURATION       40  // (cycles)
#define LEF_BUZZER_SHORT_BEEP_DURATION 10  // (cycles)
#define LEF_BUZZER_BLIP_DURATION        2  // (cycles)
#define LEF_BUZZER_LONG_BEEP_DURATION  80  // (cycles)
#define LEF_BUZZER_PAUSE               15  // (cycles)


// Led settings -----------------------------------------------------------

#define LED_BLINK_DURATION             40  // (cycles)
#define LED_FAST_BLINK_DURATION         5  // (cycles)
#define LED_SINGLE_BLINK_DURATION       5  // (cycles)

	
// LedRG settings ---------------------------------------------------------

#define LEDRG_BLINK_PERIOD             30  // (cycles)
#define LEDRG_FAST_BLINK_PERIOD         5  // (cycles)
#define LEDRG_SINGLE_BLINK_PERIOD       5  // (cycles)


#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

