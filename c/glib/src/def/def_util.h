/**
 *---------------------------------------------------------------------------
 * @brief   Some usefull C routines.
 *
 * @file    def_util.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license GPLv2
 *
 *---------------------------------------------------------------------------
 */

#ifndef PMUTIL_H
#define PMUTIL_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

// Macros -----------------------------------------------------------------

// Typedefs ---------------------------------------------------------------

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------


char *int2bin(char *buf, int val, int8_t bits);

void printLine(void);
void printTextLine(char *text);

	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

