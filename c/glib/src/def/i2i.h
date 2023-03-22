/**
 *---------------------------------------------------------------------------
 * @brief   Integer 2 integer associative array.
 *
 * @file    i2i.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

#ifndef I2I_H
#define I2I_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

// Macros -----------------------------------------------------------------

#define I2I_LAST (int)0xFFFFFFFF
#define I2I_END I2I_LAST, 0

typedef int I2I_KEY;
typedef int I2I_VAL;
	
// Typedefs ---------------------------------------------------------------

typedef struct {
	int  key;
   int   value;
} i2i;


// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------


/**
 * Create new database.
 *
 * @param size nr of elements of new db
 * @return pointer to db
 */
i2i *i2i_new(int size);

/**
 * Copy database.
 *
 * @param db database to copy
 * @return pointer to new db
 */
i2i *i2i_copy(i2i *db);

/**
 * Deallocate database.
 *
 * @param db database to deallocate
 */
void i2i_free(i2i *db);

/**
 * Find index of key in database.
 *
 * @param db database to search
 * @param key the key to be found in database
 * @return -1 if key not found, >0 index in db
 */
int i2i_findKey(i2i *db, I2I_KEY key);

/**
 * Find index of value in database.
 *
 * @param db database to search
 * @param value value to be found in database
 * @return -1 if key not found, 0> index in db
 */
int i2i_findValue(i2i *db, I2I_VAL value);

/**
 * Get the value to corresponding key
 * @param db database to search
 * @param key key to find
 * @return
 */
I2I_VAL i2i_getValue(i2i *db, I2I_KEY key);

/**
 * Set value to corresponding key in database
 * @param db database to set value in
 * @param key the key whos value to be set
 * @param value new value
 */
void i2i_setValue(i2i *db, I2I_KEY key, I2I_VAL value);

/**
 *
 * @param db database to set key/value in
 * @param idx index in db to be set
 * @param key new key
 * @param value new value
 */
void i2i_setKeyValue(i2i *db, int idx, I2I_KEY key, I2I_VAL value);


/**
 * First element in database.
 *
 * @param db database to be questioned
 * @return index of first element in db
 */
int i2i_first(i2i *db);

/**
 *
 * @param db database to be questioned
 * @return
 */
int i2i_last(i2i *db);

/**
 * Length of database.
 *
 * @param db database to be questioned
 * @return nr of elements in db
 */
int i2i_len(i2i *db);


void i2i_printDb(i2i *db);
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

