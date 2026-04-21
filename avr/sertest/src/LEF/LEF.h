/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution.
 *
 *---------------------------------------------------------------------------
 * @brief   Main LEF file
 *
 * @file    LEF.h
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

#include "LEF_Core.h"
#include "LEF_Button.h"
#include "LEF_Buzzer.h"
#include "LEF_Cli.h"
#include "LEF_Config.h"
#include "LEF_Led.h"
#include "LEF_LedA.h"
#include "LEF_LedRG.h"
#include "LEF_Pot.h"
#include "LEF_Queue.h"
#include "LEF_Rotary.h"
#include "LEF_Timer.h"
#include "LEF_Types.h"

#ifdef LEF_SYSTEM_LINUX
#include "LEF_linux.h"
#endif


#ifdef __cplusplus
} //end brace for extern "C"
#endif


