/**
 *---------------------------------------------------------------------------
 * @brief   Common AVR simulator functions
 *
 * @file    avrsimul.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-07-15
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

#ifndef AVRSIMUL_H
#define AVRSIMUL_H

#ifdef __cplusplus
extern "C" {
#endif

// Macros -----------------------------------------------------------------

// This port correponds to the "-W 0x20,-" command line option.
#define special_output_port (*((volatile char *)0x20))

// This port correponds to the "-R 0x22,-" command line option. 
#define special_input_port  (*((volatile char *)0x22))

// Variables --------------------------------------------------------------

// Functions --------------------------------------------------------------

	
int simul_putchar(char c, FILE *stream);
	
int simul_getchar(void);
	
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

