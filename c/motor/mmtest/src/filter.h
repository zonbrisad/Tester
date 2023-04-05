/**
 *---------------------------------------------------------------------------
 * @brief    Signal filter abstract datatype
 *
 * @file     filter.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-05
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */
        
#ifndef _FILTER_H_
#define _FILTER_H_
        
#ifdef __cplusplus
extern "C"
#endif

#include <stdint.h>
#include "mmmotor_settings.h"


#define FILTER_SIZE 10

typedef struct {
	uint8_t pos;
	uint8_t f;
	CHANNEL_VAL data[FILTER_SIZE];
} FILTER;




FILTER *FILTER_new();

void FILTER_init(FILTER *filter);


CHANNEL_VAL FILTER_value(FILTER *filter);


void FILTER_add(FILTER *filter, CHANNEL_VAL val);



void FILTER_free(FILTER *filter);

#endif // _FILTER_H_ 
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
