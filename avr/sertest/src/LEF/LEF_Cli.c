/**
 * LEF - Lightweight Event Framework
 *
 * This file is part of LEF distribution
 *
 *---------------------------------------------------------------------------
 * @brief   A simple Command Line Interface for LEF.
 *
 * @file    LEF_Cli.c
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

// Includes ---------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "LEF.h"
#include "LEF_Cli.h"
#include "LEF_Config.h"

#include "LEF_Cli_History.h"

// Macros -----------------------------------------------------------------

#define NO_DATA     0x0100
#define ARROW_UP    0x0500
#define ARROW_DOWN  0x0600
#define ARROW_LEFT  0x0700
#define ARROW_RIGHT 0x0800

// Variables --------------------------------------------------------------

char cli_buf[LEF_CLI_BUF_LENGTH];
uint8_t cli_cnt;
uint8_t cli_lock;
uint8_t cli_wait_key_pressed;

const LEF_CliCmd *cli_cmds; 
uint8_t cli_cmds_length;

LEF_History cli_history;

// Code -------------------------------------------------------------------

/**
 * Filter ANSI escape sequences from input characters. This function maintains an internal state to detect and filter out ANSI sequences, while allowing normal characters to pass through. It also translates arrow key sequences into specific codes.
 */
uint16_t ANSI_Filter(const char ch) {
	static uint8_t pos = 0;

	switch (pos) {
		case 0:
			if (ch == 0x1b) { // ESC
				pos = 1;
				return NO_DATA; // Filter out ESC
			}
			return ch; // Normal character
		case 1:
			if (ch == '[') {
				pos = 2;
				return NO_DATA; // Filter out [
			} else {
				pos = 0; // Not an ANSI sequence, reset state
				return ch; // Return the character that was after ESC
			}
		default:
			if (isalpha(ch)) {
				pos = 0; // Reset state after processing ANSI sequence
				switch (toupper(ch)) {
					case 'A': return ARROW_UP;
					case 'B': return ARROW_DOWN;
					//case 'C': return ARROW_RIGHT;
					//case 'D': return ARROW_LEFT;
					default: return NO_DATA; // Filter out the final character of ANSI sequence
				}
			}
			if (pos > 5)
				pos = 0; // Reset state if sequence is too long (should not happen)
				// return 0; // Filter out characters in ANSI sequence
			else
				pos++; // Move to next character in ANSI sequence				
	}
	return ch; // Return character just in case
}


void LEF_Cli_WaitKeyPressed(void) {
	cli_wait_key_pressed = 1;
}

void LEF_Cli_init(const LEF_CliCmd *cmds, uint8_t size) {
  	cli_cnt  = 0;
  	cli_lock = 0;
  	cli_cmds = cmds;
  	cli_wait_key_pressed = 0;

	cli_cmds_length = size;

	history_init(&cli_history);

	printf("\n%s", LEF_CLI_PROMPT);
}

void LEF_Cli_putc(const char ch) {
	LEF_Event event;
	
	uint16_t chf = ANSI_Filter(ch);

	if (cli_wait_key_pressed) {
		event.id = LEF_EVENT_CLI;
		event.func = 1;
		LEF_QueueStdSend(&event);
		return;
	}
	
	if (chf == NO_DATA) {
		return; // Filtered out character, do nothing
	}

	// handle arrow keys
	if (chf >= ARROW_UP) {
		event.id = LEF_EVENT_CLI;		
		event.func = chf >> 8; // Store arrow key code in func field (1=up, 2=down, 3=right, 4=left)
		LEF_QueueStdSend(&event);
		return;
	}

	// handle backspace
	if (chf=='\b') {
		if (cli_cnt > 0 ) {
		  cli_cnt--;
			printf("\b \b");
			return;
		}
		return;
	}

	// handle newline(enter)
	if (chf=='\n') {
		printf("\n");

		event.id = LEF_EVENT_CLI;
		event.func = 0;
		
		LEF_QueueStdSend(&event);
				
		return;
	}

	// maximum buffer length check (leave space for null terminator)
	if (cli_cnt >= LEF_CLI_BUF_LENGTH)
		return;

	// add character to buffer and echo it
	cli_buf[cli_cnt] = chf;
	cli_cnt++;
    cli_buf[cli_cnt] = '\0';
    printf("%c",chf);
}


void LEF_Cli_print(void) {
	char cBuf[LEF_CLI_BUF_LENGTH];
	char dBuf[LEF_CLI_BUF_LENGTH];
	cmd_handler ptr;

  	for(int i=0; i<cli_cmds_length; i++) {

		lefstrcpy(cBuf, cli_cmds[i].name);
		lefstrcpy(dBuf, cli_cmds[i].desc);

		ptr = (cmd_handler)pgm_read_word(&cli_cmds[i].function);
		if (ptr != NULL)
			lefprintf("  %-12s", cBuf);
	
	//		
	// Change in future?
	// use lefprintf("%s", dBuf) instead of lefprintf(dBuf) to avoid format string vulnerability warning from compiler
	// 
	#pragma GCC diagnostic ignored "-Wformat-security"
    lefprintf(dBuf);
	#pragma GCC diagnostic pop
    
    lefprintf("\n");
  }
}

void LEF_Cli_exec(LEF_Event *event) {
    cmd_handler ptr;
    char cmd[LEF_CLI_BUF_LENGTH];
	
    // Key press event from WaitKeyPressed
    if (event->func == 1) { 
		cli_wait_key_pressed = 0;
        return;
    }
	
	// up/down key pressed
	if ((event->func  >= 5) && (event->func <= 6)) { 
		if (event->func == 5) // Up arrow
			history_up(&cli_history);
		
		if (event->func == 6) // Down arrow
			history_down(&cli_history);
		
		const char* hist_cmd = history_current(&cli_history);
        printf("\r" LEF_CLI_PROMPT "%-40s", hist_cmd);
		printf("\r\e[%dC", strlen(hist_cmd)+strlen(LEF_CLI_PROMPT));
		cli_cnt = strlen(hist_cmd);
		strncpy(cli_buf, hist_cmd, LEF_CLI_BUF_LENGTH - 1);
		cli_buf[LEF_CLI_BUF_LENGTH - 1] = '\0';
        return;
	}
	
	// enter key pressed
    if (cli_cnt == 0) {
		lefprintf(LEF_CLI_PROMPT);
        return;
    }
	
	// find start position of command and arguments in buffer
	char* cmd_start = NULL;
	char* args_start = NULL;
	for (int j = 0; j < LEF_CLI_BUF_LENGTH; j++) {
		
		if ((cli_buf[j] != ' ') && (cmd_start == NULL)) {
			cmd_start = &cli_buf[j];
		} 
		
		if (cmd_start != NULL) {
			if (cli_buf[j] == ' ') {
				cli_buf[j] = '\0';
				args_start = &cli_buf[j+1];
				break;
			}
		}
	}
	
	for (int i=0; i<cli_cmds_length; i++) {
        lefstrcpy(cmd, cli_cmds[i].name);
        if (!strncmp(cmd, cmd_start, LEF_CLI_BUF_LENGTH)) {
        // if (!strncmp(cmd, cli_buf, LEF_CLI_BUF_LENGTH)) {
            //			LDEBUGPRINT("Found command: %s\n", cmd);
            ptr = (cmd_handler)pgm_read_word(&cli_cmds[i].function);
            ptr(args_start);
            goto cli_cleanup;
        }
    }

	lefprintf("%s: Command not found\n", cmd_start);
    // lefprintf("Args: %s\n", args_start);
	
cli_cleanup:
	
	// remove null termination for command and argument separation
	if (args_start != NULL)
		args_start[-1] = ' ';

	history_add(&cli_history, cli_buf);
	
	cli_lock = 0;
	cli_cnt = 0;
	lefprintf(LEF_CLI_PROMPT);
}
