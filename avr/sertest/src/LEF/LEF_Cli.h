/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A simple Command Line Interface for LEF.
 *
 * @file    LEF_Cli.h
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

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

#include "LEF_Config.h"

// Macros -----------------------------------------------------------------

#define LEF_CLI_INIT(commands) LEF_Cli_init(commands, (sizeof((commands)) / sizeof((commands)[0])))

#define LEF_CLI_LABEL(label)  {.function=NULL, .desc=label }
#define LEF_CLI_CMD(func, name, desc)  {(cmd_handler)func, name, desc }
// #define LEF_CLI_CMD(func, name, desc)  {.function=(cmd_handler)func, .name=name, .desc=desc }

// Typedefs ---------------------------------------------------------------

typedef void (*cmd_handler)(char *);

typedef struct {
  cmd_handler function;
  char name[LEF_CLI_CMD_LENGTH];
  char desc[LEF_CLI_DESC_LENGTH];
} LEF_CliCmd;

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

/** Initialize the CLI 
 * @param cmds Pointer to an array of LEF_CliCmd structs
 * @param size Number of commands in the cmds array
*/
void LEF_Cli_init(const LEF_CliCmd *cmds, uint8_t size);

void LEF_Cli_putc(const char ch);

void LEF_Cli_exec(LEF_Event *event);

void LEF_Cli_print(void);

void LEF_Cli_WaitKeyPressed(void);

uint16_t ANSI_Filter(const char ch);

#ifdef __cplusplus
} //end brace for extern "C"
#endif

