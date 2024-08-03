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
 * 1 tab = 2 spaces
 */

#ifndef LEF_CLI_H
#define LEF_CLI_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

#include "LEF_Config.h"

// Macros -----------------------------------------------------------------

#define LEF_CLI_LABEL(label)  {.function=NULL, .desc=label }
	
// Typedefs ---------------------------------------------------------------

typedef void (*handler)(char *);

typedef struct {
  handler function;
  char name[LEF_CLI_CMD_LENGTH];
  char desc[LEF_CLI_DESC_LENGTH];
} LEF_CliCmd;

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

void LEF_Cli_init(const LEF_CliCmd *cmds, uint8_t size);

void LEF_Cli_putc(char ch);

void LEF_Cli_exec(void);

void LEF_Cli_print(void);
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

