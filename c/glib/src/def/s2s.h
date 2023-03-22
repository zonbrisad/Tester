/**
 *---------------------------------------------------------------------------
 * @brief   String 2 string associative array.
 *
 * @file    s2s.h
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

#ifndef S2S_H
#define S2S_H

#ifdef __cplusplus
extern "C" {
#endif

// Includes ---------------------------------------------------------------

// Macros -----------------------------------------------------------------

#define S2S_STRLEN 32
#define S2S_LAST "#L@$t!"
#define S2S_END S2S_LAST, ""

// Typedefs ---------------------------------------------------------------

typedef struct {
	char key[S2S_STRLEN];
    char value[S2S_STRLEN];
} S2S;

// Variables --------------------------------------------------------------

// Prototypes -------------------------------------------------------------


/**
 * Create new database.
 *
 * @param size nr of elements of new db
 * @return pointer to db
 */
S2S *S2S_new(int size);

/**
 * Copy database.
 *
 * @param db database to copy
 * @return pointer to new db
 */
S2S *S2S_copy(S2S *db);

/**
 * Deallocate database.
 *
 * @param db database to deallocate
 */
void S2S_free(S2S *db);

/**
 * Find index of key in database.
 *
 * @param db database to search
 * @param key the key to be found in database
 * @return -1 if key not found, >0 index in db
 */
int S2S_findKey(S2S *db, char *key);

/**
 * Find index of value in database.
 *
 * @param db database to search
 * @param value value to be found in database
 * @return -1 if key not found, 0> index in db
 */
int S2S_findValue(S2S *db, char *value);

/**
 * Get the value to corresponding key
 * @param db database to search
 * @param key key to find
 * @return
 */
char *S2S_getValue(S2S *db, char *key);

/**
 * Set value to corresponding key in database
 * @param db database to set value in
 * @param key the key whos value to be set
 * @param value new value
 */
void S2S_setValue(S2S *db, char *key, char *value);

/**
 *
 * @param db database to set key/value in
 * @param idx index in db to be set
 * @param key new key
 * @param value new value
 */
void S2S_setKeyValue(S2S *db, int idx, char *key, char *value);


/**
 * First element in database.
 *
 * @param db database to be questioned
 * @return index of first element in db
 */
int S2S_first(S2S *db);

/**
 * Last element in database.
 *
 * @param db database to be questioned
 * @return index to last element in list
 */
int S2S_last(S2S *db);

/**
 * Length of database.
 *
 * @param db database to be questioned
 * @return nr of elements in db
 */
int S2S_len(S2S *db);

/**
 * Print database
 * @param db database to be printed
 */
void S2S_printDb(S2S *db);
	
#ifdef __cplusplus
} //end brace for extern "C"
#endif
#endif

