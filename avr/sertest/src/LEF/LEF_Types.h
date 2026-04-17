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

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// Typedefs ---------------------------------------------------------------

typedef uint8_t LEF_EventId;

typedef uint8_t LEF_EventFunc;


typedef struct {
    LEF_EventId id;
    LEF_EventFunc func;
} LEF_Event;

typedef bool (*LEF_EventHandler)(LEF_Event* event);

#ifdef __cplusplus
} //end brace for extern "C"
#endif


