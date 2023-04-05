/**
 *---------------------------------------------------------------------------
 * @brief    Signal filter abstract datatype
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
#include "filter.h"


FILTER *FILTER_new() {
	FILTER *filter;
	filter = malloc(sizeof(FILTER));
	FILTER_init(filter);
  return filter;
}

void FILTER_init(FILTER *filter) {
  filter->pos=0;
	filter->f=1;
}

CHANNEL_VAL FILTER_value(FILTER *filter) {
	int i;
  CHANNEL_VAL val = 0;

	if (filter->f == 0) {
		for (i=0; i<filter->pos; i++) {
			val += filter->data[i];
		}
		return (val/(filter->pos+1));
	} else {
		for (i=0; i<FILTER_SIZE; i++) {
			val += filter->data[i];
		}
		return (val/FILTER_SIZE);
	}
}

void FILTER_add(FILTER *filter, CHANNEL_VAL val) {
  filter->data[filter->pos] = val;
	filter->pos++;
	if (filter->pos >= FILTER_SIZE) {
		filter->pos = 0;
	}
}

 
void FILTER_free(FILTER *filter) {  
  free(filter);
}

