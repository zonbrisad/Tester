/**
 *---------------------------------------------------------------------------
 * @brief    Printf test
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-05-25
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */


// Include ------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include "main.h"

// Macros -------------------------------------------------------------------


// Prototypes ---------------------------------------------------------------


// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------


// Code ---------------------------------------------------------------------

int main(int argc, char *argv[]) {
	int a = 6;
	char x[20] = "Kalle";
	
  printf(" [%*s]\n", a, x); 

	
}