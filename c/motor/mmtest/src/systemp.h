/**
 *---------------------------------------------------------------------------
 * @brief    Get system temperature from /sys
 *
 * @file     systemp.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-04
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */
        
#ifndef _SYSTEMP_H_
#define _SYSTEMP_H_
        
#ifdef __cplusplus
extern "C"
#endif

#include <stdio.h>


typedef struct {
  FILE *file;
	char filename[256];
	int  temperature;
} STEMP;


STEMP *STEMP_new();

void STEMP_init(STEMP *stemp, const char *filename);

void STEMP_read(STEMP *stemp);

void STEMP_free(STEMP *stemp);

#endif // _SYSTEMP_H_ 
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
