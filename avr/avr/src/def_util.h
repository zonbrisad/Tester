/**
 *---------------------------------------------------------------------------
 * @brief   Some usefull C routines.
 *
 * @file    pmutil.h
 * @author  Your Name <your.name@yourdomain.org>
 * @date    2017-05-04
 * @licence GPLv2
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

	
// Activate linux specific utils
//#define PMU_LINUX 1


#define I2S_STRLEN 32
#define I2S_LAST (int)0xFFFFFFFF
#define I2S_END I2S_LAST, ""

#define S2S_STRLEN 32
#define S2S_END "", ""

	
	

// Typedefs ---------------------------------------------------------------

typedef struct {
    int  key;
    char val[I2S_STRLEN];
} I2S;

typedef struct {
    char key[S2S_STRLEN];
    char val[S2S_STRLEN];
} S2S;


// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------

I2S *I2S_new(int size);
I2S *I2S_copy(I2S *db);
void I2S_free(I2S *db);

int I2S_findIdx(I2S *db, int key);
int I2S_findIdxStr(I2S *db, char *value);
char *I2S_getValue(I2S *db, int key);
void I2S_setValue(I2S *db, int key, char *value);

void I2S_setKeyValue(I2S *db, int idx, int key, char *value);

int I2S_last(I2S *db);
int I2S_first(I2S *db);
int I2S_len(I2S *db);



int S2S_findIdx(S2S *db, char *key);
int S2S_findIdxStr(S2S *db, char *value);
char *S2S_getValue(S2S *db, char *key);
void S2S_setValue(S2S *db, char *key, char *value);
int S2S_last(S2S *db);
int S2S_first(S2S *db);
int S2S_len(S2S *db);


char *int2bin(int val, uint8_t bits);	
	
	
#ifdef PMU_LINUX

void daemonize(void);
	
#endif
	
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

