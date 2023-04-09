/**
 *---------------------------------------------------------------------------
 * @brief    Get system temperature from /sys
 *
 * @file     systemp.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-04
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#include <stdlib.h>
#include <string.h>
#include "systemp.h"


STEMP *STEMP_new() {
  return malloc(sizeof(STEMP));
}

void STEMP_init(STEMP *stemp, const char *filename) {
	strcpy(stemp->filename, filename);
//  stemp->file = fopen(filename, "r");
} 



void STEMP_read(STEMP *stemp) {
	stemp->file = fopen(stemp->filename, "r");
	fscanf(stemp->file, "%d", &stemp->temperature);
	fclose(stemp->file);
}



void STEMP_free(STEMP *stemp) {  
	fclose(stemp->file);
	free(stemp);
}

