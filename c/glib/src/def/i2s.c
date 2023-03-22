/**
 *---------------------------------------------------------------------------
 * @brief   Integer 2 string associative array.
 *
 * @file    i2s.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include "def.h"
#include "i2s.h"


// Code -------------------------------------------------------------------

I2S *I2S_new(int size) {
    I2S *db;

    db = malloc((size + 1) * sizeof(I2S));

    db[size].key = I2S_LAST;
    db[size].value[0] = '\0';

    return db;
}

I2S *I2S_copy(I2S *db) {
    I2S *dst;
    int len;

    len = I2S_len(db);
    dst = I2S_new(len);
    memcpy(dst, db, len * sizeof(I2S));

    return dst;
}

void I2S_free(I2S *db) {
    free(db);
}

int I2S_findKey(I2S *db, int key) {
    int i = 0;

    while (db[i].key != I2S_LAST) {
        if (db[i].key == key) {
            return i;
        }

        i++;
    }

    return -1;
}

int I2S_findValue(I2S *db, char *value) {
    int i = 0;

    while (db[i].key != I2S_LAST) {
        if (!strncmp(db[i].value, value, I2S_STRLEN)) {
            return i;
        }

        i++;
    }

    return -1;
}

char *I2S_getValue(I2S *db, I2S_KEY key) {
    int idx = 0;

    idx = I2S_findKey(db, key);

    if (idx != -1) {
        return db[idx].value;
    } else {
        return NULL;
    }
}

void I2S_setValue(I2S *db, I2S_KEY key, char *value) {
    int idx = 0;

    idx = I2S_findKey(db, key);

    if (idx != -1) {
        strncpy(db[idx].value, value, I2S_STRLEN);
    }
}

void I2S_setKeyValue(I2S *db, int idx, I2S_KEY key, char *value) {

    if (isWithin(idx, 0, I2S_len(db) - 1)) {
        db[idx].key = key;
        strncpy(db[idx].value, value, I2S_STRLEN);
    }
}


int I2S_len(I2S *db) {
    int i = 0;

    while (db[i].key != I2S_LAST) {
        i++;
    }

    return i;
}

int I2S_last(I2S *db) {
    return I2S_len(db) - 1;
}

int I2S_first(I2S *db) {
    UNUSED(db);
    return 0;
}

void I2S_printDb(I2S *db) {
    int i;

    for (i = 0; i < I2S_len(db); i++) {
        printf("%8d   %s\n", db[i].key, db[i].value);
    }
}


