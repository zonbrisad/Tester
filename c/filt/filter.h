/**
 *---------------------------------------------------------------------------
 * @brief    
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



typedef struct {
	int16_t *data;
} FILTER;




FILTER *FILTER_new(uint8_t size);

void FILTER_init(FILTER *filter);

void FILTER_free(FILTER *filter);

#endif // _FILTER_H_ 
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
