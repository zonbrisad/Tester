/**
 *---------------------------------------------------------------------------
 * @brief   Config log file manager
 *
 * @file    conflog.c
 * @author  Peter Malmberg <peter.malmberg@gmail.com>
 * @date    2016-03-04
 * @licence GPLv2
 *
 *---------------------------------------------------------------------------
 */

/* Includes ---------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#include "sqlite3.h"
#include "conflog.h"

/* Macros -----------------------------------------------------------------*/

/* Variables --------------------------------------------------------------*/
char *tableConflog =
	"CREATE TABLE conflog ( "
  "  id INTEGER PRIMARY KEY, "
  "  type integer, "
  "  key varchar(16), "
  "  value TEXT, "
  "  timeEnter DATE, "
  "  max INTEGER,"
  "  min INTEGER,"
  "  description TEXT,"
  "  unique (key) "
  "); "
  "CREATE TRIGGER insert_conflog AFTER INSERT ON conflog "
  "BEGIN "
  "  UPDATE conflog SET timeEnter=DATETIME('NOW') WHERE rowid=new.rowid; "
  "END; "
  "CREATE TRIGGER update_conflog AFTER UPDATE ON conflog "
  "BEGIN "
  "  UPDATE conflog SET timeEnter=DATETIME('NOW') WHERE rowid=new.rowid; "
  "END; ";

#define CLINT(x) 
char *initValues=
	"INSERT INTO conflog (key, value, description) VALUES (__CONFLOG_DBVERSION, 0.1, 'Database version')"
  "INSERT INTO conflog (key, value) VALUES (__CONFLOG_MAXSIZE, 100000)";



/* Prototypes -------------------------------------------------------------*/

/* Code -------------------------------------------------------------------*/

int simpleSQL(sqlite3 *db, char *sql) {
	int res;
	char *eMsg;
	
	res = sqlite3_exec(db, sql, NULL, NULL, &eMsg);
	if (res != SQLITE_OK) {	
		sqlite3_free(eMsg);
	}
	return res;
}

int tableExists(sqlite3 *db, char *tableName) {
	char sql[64];
	int rc;
	sqlite3_stmt *stmt;
	
	sprintf(sql, "SELECT name FROM sqlite_master WHERE name='%s'", tableName);
	
	rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
	
	if (rc == SQLITE_OK) {
		rc = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (rc == SQLITE_ROW)
			return 1;
		else
			return 0;
	} else {
		return 0;
	}
}

void setValueInt(sqlite3 *db, const char *key, int value) {
	char sql[128];
	int res;
	
	// try do an INSERT value into table
	sprintf(sql, "INSERT INTO conflog (key, value) VALUES ('%s', %d);", key, value);
	//printf("%s\n", sql);
	res = sqlite3_exec(db, sql, NULL, NULL, NULL);
	
	// if INSERT fails -> record exist -> do an UPDATE
	if (res!=SQLITE_OK) {
		sprintf(sql, "UPDATE conflog SET value=%d WHERE key='%s';", value, key);
		//printf("%s\n", sql);
		sqlite3_exec(db, sql, NULL, NULL, NULL);
	}
}

int getValueInt(sqlite3 *db, const char *key, int *value) {
	char sql[128];
	int rc;
	sqlite3_stmt *stmt;
	
	if (db != NULL) {
		sprintf(sql, "SELECT value FROM conflog WHERE  key='%s';", key);
		rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
		
		if (rc == SQLITE_OK) {
			rc = sqlite3_step(stmt);
			
			if (rc == SQLITE_ROW) {              
				*value = sqlite3_column_int(stmt, 0);
				sqlite3_finalize(stmt);
				return 1;
			} else {
				sqlite3_finalize(stmt);
				return 0;
			}
		}
	}
	return -1;
}

void conflog_createTables(conflog_struct *cl) {
	simpleSQL(cl->db, tableConflog);
	simpleSQL(cl->db, initValues);
}

void conflog_updateTables(conflog_struct *cl) {
}

void conflogOpen(conflog_struct *cl, const char fileName) {
 int rc;
	
	rc = sqlite3_open(fileName, &cl->db);
	if(rc != SQLITE_OK) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(cl->db));
		sqlite3_close(cl->db);
		return NULL;
	}
	
//	rc = sqlite3_busy_timeout(cl->db, DB_BUSY_TIMEOUT);
	if(rc != SQLITE_OK) {
		fprintf(stderr, "Can not set busy timeout handler: %i\n", rc);
		sqlite3_close(cl->db);
			    return NULL;
	}
	
	if (tableExists(cl->db, "conflog")) {
		conflog_updateTables(cl);
	} else {
	  conflog_createTables(cl);
	}
}
