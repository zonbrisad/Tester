/**
 *---------------------------------------------------------------------------
 * @brief   Integer 2 string associative array.
 *
 * @file    i2s.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

#ifndef I2S_H
#define I2S_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

// Macros -----------------------------------------------------------------

#define I2S_STRLEN 32
#define I2S_LAST (int)0xFFFFFFFF
#define I2S_END I2S_LAST, ""

typedef int I2S_KEY;
//typedef int I2S_VAL;
	

// Typedefs ---------------------------------------------------------------

typedef struct {
	I2S_KEY  key;
    char value[I2S_STRLEN];
} I2S;

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------


/**
 * Create new database.
 *
 * @param size nr of elements of new db
 * @return pointer to db
 */
I2S *I2S_new(int size);

/**
 * Copy database.
 *
 * @param db database to copy
 * @return pointer to new db
 */
I2S *I2S_copy(I2S *db);

/**
 * Deallocate database.
 *
 * @param db database to deallocate
 */
void I2S_free(I2S *db);

/**
 * Find index of key in database.
 *
 * @param db database to search
 * @param key the key to be found in database
 * @return -1 if key not found, >0 index in db
 */
int I2S_findKey(I2S *db, I2S_KEY key);

/**
 * Find index of value in database.
 *
 * @param db database to search
 * @param value value to be found in database
 * @return -1 if key not found, 0> index in db
 */
int I2S_findValue(I2S *db, char *value);

/**
 * Get the value to corresponding key
 * @param db database to search
 * @param key key to find
 * @return
 */
char *I2S_getValue(I2S *db, I2S_KEY key);

/**
 * Set value to corresponding key in database
 * @param db database to set value in
 * @param key the key whos value to be set
 * @param value new value
 */
void I2S_setValue(I2S *db, I2S_KEY key, char *value);

/**
 *
 * @param db database to set key/value in
 * @param idx index in db to be set
 * @param key new key
 * @param value new value
 */
void I2S_setKeyValue(I2S *db, int idx, I2S_KEY key, char *value);


/**
 * First element in database.
 *
 * @param db database to be questioned
 * @return index of first element in db
 */
int I2S_first(I2S *db);

/**
 * Last element in database.
 *
 * @param db database to be questioned
 * @return index to last element in list
 */
int I2S_last(I2S *db);

/**
 * Length of database.
 *
 * @param db database to be questioned
 * @return nr of elements in db
 */
int I2S_len(I2S *db);

/**
 * Print database
 * @param db database to be printed
 */
void I2S_printDb(I2S *db);
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

