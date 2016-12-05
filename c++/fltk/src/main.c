/**
 *---------------------------------------------------------------------------
 * @brief   Makeplates main example file.
 *
 * @file    main.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-10-24
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <errno.h>

#include "def.h"

// Defines ----------------------------------------------------------------

#define PROGNAME "makeplate"

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------
void sigInt(int sig);
void sigHup(int sig);

// Code -------------------------------------------------------------------


void sigInt(int sig) {
	UNUSED(sig);
	
	printf("\nExiting program\n");
	exit(0);
}

void sigHup(int sig) {
	UNUSED(sig);
	printf("Sighup\n");
}


int main(int argc, char *argv[]) {
	int i;
	
	UNUSED(argc);
	UNUSED(argv);
	
	signal(SIGINT, sigInt);
	signal(SIGHUP, sigHup);
	
	printf("\nMakeplate linux C example.\n\n\n");

	INFOPRINT("Information printout\n");
	
	DEBUGPRINT("Debug printout\n");
	
	WARNINGPRINT("Warning printout\n");
	
	ERRORPRINT("Error printout\n");
	
	DEBUG_DO(printf("Debug do\n"));
	
	
	i = 0;
	
	printf("Var i = %2x\n", i);
	BIT_SET(i, 4);
	printf("Var i = %2x\n", i);
	BIT_SET(i, 2);
	printf("Var i = %2x\n", i);
	BIT_CLEAR(i,4);
	printf("Var i = %2x\n", i);

	
	printf("Use CTRL-C to stop program\n");
	while(1) {
	}
	
	return 0;
}
