
#include <string.h>
#include <swill/swill.h>

#include "swill_json.h"

int arrayComma;
int jsonX;
int indent = 0;
int array = 0;

void json_GetInt(char *varName, int *var) {
  int tmp;
  static char buf[32];
  tmp = *var;
  sprintf(buf, "|i(%s)", varName);
  if (swill_getargs(buf, &tmp)) {
    *var = tmp;
  }
}

/**
 * Parse out double variables from urlstring.
 * 
 * @param varName   variable name
 * @param var       destination of parsed variable
 */
int json_GetDouble(char *varName, double *var) {
  double tmp;
  static char buf[128];
  sprintf(buf, "|d(%s)", varName);
  tmp = -1000000000L;
  swill_getargs(buf, &tmp);
  
  if (tmp!=-1000000000L) {
    *var = tmp;
    return 1;
  }
  return 0;
}

/**
 * Parse out string variables from urlstring
 * 
 * @param varName variable name
 * @param var     destination of parsed variable
 * @return        1 if variable was parsed correctly, otherwise 0
 */
int json_GetString(char *varName, char **var) {
  char *tmp;
  static char buf[32];
  //tmp = *var;
  sprintf(buf, "s(%s)", varName); 
  if (swill_getargs(buf, &tmp)) { 
    *var = tmp;
    return 1;
  }
  return 0;
}

void jsonIndent(FILE *f, int indent){
  for(;indent > 0; indent--){
    fprintf(f," ");
  }
}

void jsonHeader(FILE *f, char *comment) {
  if(comment != NULL) {
    fprintf(f,"\n");
    jsonIndent(f, indent);
    fprintf(f,"// %s\n",comment);
  } 
  jsonIndent(f, indent);
  fprintf(f,"{");
  indent += 2;
  jsonX = 0;
}

void jsonStart(FILE *f) {
  fprintf(f, "\n");
  jsonIndent(f, indent);
  fprintf(f,"{");
  indent +=2;
}
void jsonEnd(FILE *f) {
  indent -=2;
  fprintf(f,"\n");
  jsonIndent(f, indent);
  fprintf(f,"}");
}



void jsonComma(FILE *f) {
  
  
  if (jsonX) {
    fprintf(f,",");
  } 
  jsonX++;

  //if (arrayComma) {
  //  fprintf(f,",");
  //}
  //arrayComma++;
}
void jsonNewLine(FILE *f) {
  fprintf(f,"\n");
} 


void jsonArrayStart(FILE *f, char *name) {
  jsonComma(f);
  jsonNewLine(f);
  jsonIndent(f, indent);
  arrayComma=0;
  jsonX = 0;
  if(name == NULL){
    fprintf(f, "[");
  } else {
    fprintf(f, "\"%s\":\n",name);
    jsonIndent(f, indent);
    fprintf(f,"[\n");
  }
  indent += 2;
}


void jsonArrayEnd(FILE *f) {
  indent -= 2;
  fprintf(f, "\n");
  jsonIndent(f, indent);
  fprintf(f, "]");
}

void jsonObjectStart(FILE *f, char *name) {
  //fprintf(f, "\n");
  jsonComma(f);
  jsonNewLine(f);
  if (name!=NULL) {
    //
    //jsonNewLine(f);
    jsonIndent(f, indent);
    fprintf(f,"\"%s\":\n",name);
  }
  jsonX=0;

/*
  if(arrayComma) {
    fprintf(f,",\n");
  }
*/

  jsonIndent(f, indent);
  fprintf(f, "{");
  arrayComma++;
  indent += 2;
}
void jsonObjectEnd(FILE *f) {
  indent -=2;
  fprintf(f, "\n");
  jsonIndent(f, indent);
  fprintf(f, "}");
}

void jsonBoolean(FILE *f, char *name, int value) {
  jsonComma(f);
  jsonNewLine(f);
  jsonIndent(f, indent);
  if (value)
    fprintf(f,"\"%s\":true",name);
  else
    fprintf(f,"\"%s\":false",name);
}

void jsonInt(FILE *f, char *name, int value) {
  jsonComma(f);
  jsonNewLine(f);
  jsonIndent(f,indent);
  fprintf(f,"\"%s\":%d",name, value);
}

void jsonDouble(FILE *f, char *name, double value) {
  jsonComma(f);
  jsonNewLine(f);
  jsonIndent(f, indent);
  fprintf(f,"\"%s\":%f",name, value);
}


void jsonString(FILE *f, const char const *name, const char * const value) {
  static char buf[2048];
  int i, j;
  j=0;
  for (i=0;i<strlen(value);i++) {
    if (value[i]=='"') {
      buf[j]='\\';
      j++;
      buf[j]='"';
      j++;
    } else {
      buf[j]=value[i];
      j++;
    }
  }
  buf[j] = '\0';
  
  jsonComma(f);
  jsonNewLine(f);
  jsonIndent(f,indent);
  //fprintf(f,"\"%s\":\"%s\"",name, value);
  fprintf(f,"\"%s\":\"%s\"",name, buf);
  //jsonComma(f,noComma);
}
