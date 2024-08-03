/**
 *---------------------------------------------------------------------------
 * @brief    
 *
 * @file     filter.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-05
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */


#include <stdlib.h>
#include <stdint.h>
#include "filter.h"


FILTER *FILTER_new(uint8_t size) {
	FILTER *flt;
	flt = malloc(sizeof(FILTER));
	flt->data=malloc(sizeof(int16_t) * size);
	return flt;
}

void FILTER_init(FILTER *filter) {
  
} 
 
void FILTER_free(FILTER *filter) {  
  free(filter);
}

