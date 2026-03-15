/* 
 * File:   swill_json.h
 * Author: pmg
 *
 * Created on den 3 maj 2012, 23:39
 */

#ifndef SWILL_JSON_H
#define	SWILL_JSON_H

#ifdef	__cplusplus
extern "C" {
#endif

//int json_GetInt(char *varName, int *var);

/**
 * Parse out double variables from urlstring.
 * 
 * @param varName   variable name
 * @param var       destination of parsed variable
 */
int json_GetDouble(char *varName, double *var);

/**
 * Parse out string variables from urlstring
 * 
 * @param varName variable name
 * @param var     destination of parsed variable
 * @return        1 if variable was parsed correctly, otherwise 0
 */
int json_GetString(char *varName, char **var) ;

void jsonIndent(FILE *f, int indent);

void jsonStart(FILE *f);
void jsonEnd(FILE *f);

void jsonComma(FILE *f);

void jsonNewLine(FILE *f);

void jsonArrayStart(FILE *f, char *name);

void jsonArrayEnd(FILE *f);

void jsonObjectStart(FILE *f, char *name);

void jsonArrayItemEnd(FILE *f);

void jsonBoolean(FILE *f, char *name, int value);

void jsonInt(FILE *f, char *name, int value);

void jsonDouble(FILE *f, char *name, double value);

void jsonString(FILE *f, const char const *name, const char * const value);

#ifdef	__cplusplus
}
#endif

#endif	/* SWILL_JSON_H */

