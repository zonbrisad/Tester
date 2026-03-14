/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A simple Command Line Interface for LEF.
 *
 * @file    LEF_Cli_History.h
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
 *
 */

#pragma once
#include <LEF_Config.h>

typedef struct {
    char entries[LEF_CLI_HISTORY][LEF_CLI_BUF_LENGTH];
    int head;  // index of most recent entry
    int count;   
    int cursor;  // -1 = current typing, 0 = newest, 1 = older, ...
} LEF_History;

void history_init(LEF_History* h);

int history_add(LEF_History* h, const char* line);

const char* history_current(const LEF_History* h);

int history_up(LEF_History* h);

int history_down(LEF_History* h);