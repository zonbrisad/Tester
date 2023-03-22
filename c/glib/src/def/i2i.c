/**
 *---------------------------------------------------------------------------
 * @brief   SInteger 2 integer associative array.
 *
 * @file    i2i.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2017-05-04
 * @license MIT
 *
 *---------------------------------------------------------------------------
 */

// Includes ---------------------------------------------------------------

#include "def.h"
#include "i2i.h"


// Code -------------------------------------------------------------------

i2i *i2i_new(int size) {
    i2i *db;

    db = malloc((size + 1) * sizeof(i2i));

    db[size].key = I2I_LAST;
    db[size].value = 0;

    return db;
}

i2i *i2i_copy(i2i *db) {
    i2i *dst;
    int len;

    len = i2i_len(db);
    dst = i2i_new(len);
    memcpy(dst, db, len * sizeof(i2i));

    return dst;
}

void i2i_free(i2i *db) {
    free(db);
}

int i2i_findKey(i2i *db, int key) {
    int i = 0;

    while (db[i].key != I2I_LAST) {
        if (db[i].key == key) {
            return i;
        }

        i++;
    }

    return -1;
}

int i2i_findValue(i2i *db, I2I_VAL value) {
    int i = 0;

    while (db[i].key != I2I_LAST) {

        if (db[i].value == value) {
            return i;
        }

        i++;
    }

    return -1;
}

I2I_VAL i2i_getValue(i2i *db, I2I_KEY key) {
    int idx = 0;

    idx = i2i_findKey(db, key);

    if (idx != -1) {
        return db[idx].value;
    } else {
        return 0;
    }
}

void i2i_setValue(i2i *db, I2I_KEY key, I2I_VAL value) {
    int idx = 0;

    idx = i2i_findValue(db, key);

    if (idx != -1) {
        //db[idx].key = key;
        db[idx].value = value;
    }
}

void i2i_setKeyValue(i2i *db, int idx, I2I_KEY key, I2I_VAL value) {

    if (isWithin(idx, 0, i2i_len(db) - 1)) {
        db[idx].key = key;
        db[idx].value = value;
    }
}


int i2i_len(i2i *db) {
    int i = 0;

    while (db[i].key != I2I_LAST) {
        i++;
    }

    return i;
}

int i2i_last(i2i *db) {
    return i2i_len(db) - 1;
}

int i2i_first(i2i *db) {
    UNUSED(db);
    return 0;
}

void i2i_printDb(i2i *db) {
    int i;

    for (i = 0; i < i2i_len(db); i++) {
        printf("%8d   %8d\n", db[i].key, db[i].value);
    }
}


