/**
 *---------------------------------------------------------------------------
 * @brief   Common AVR simulator functions
 *
 * @file    avrsimul.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-07-15
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include <stdio.h>
#include "avrsimul.h"
#include "def.h"

// Macros -----------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

// Code -------------------------------------------------------------------

int simul_putchar(char c, FILE *stream) {
	UNUSED(stream);
	special_output_port = c;
	return 0;
}

int simul_getchar(void) {
	return special_input_port;
}
