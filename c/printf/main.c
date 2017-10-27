/**
 *---------------------------------------------------------------------------
 * @brief   Makeplates main example file.
 *
 * @file    main.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-10-24
 * @licence MIT
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

// Defines ----------------------------------------------------------------

#define PROGNAME "makeplate"

// Variables --------------------------------------------------------------

#define STR "ABCDEFGHIJ"

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------



int main(int argc, char *argv[]) {
	char *str = STR;

	printf("Some printf tests\n\n");
  printf("String fmt(%%3s):  %3s Text after string.\n", STR);
	printf("String fmt(%%.3s): %.3s Text after string\n", STR);
	printf("String fmt(%%.*s): %.*s Text after string\n", 3, STR);
	
	
	
	printf("Void Pointer(%%p): %16p\n", str);

	return 0;
}
