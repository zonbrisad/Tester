/**
 * 
 * @file   httpThread.c
 * 
 * @brief 
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 * @licence Proprietary
 *
 ********************************************************************
 * 
 */

#include <swill/swill.h>
#include "httpThread.h"
#include "swill_json.h"




void count_to_ten(FILE *f) {
  int i;
  for (i = 0; i < 10; i++) {
    fprintf(f,"%d\n", i);
  }
}
void jsonTest(FILE *f) {
  int i;
  jsonHeader(f, "Lite kommentarer");
  jsonInt(f,    "Heltal",   123);
  jsonDouble(f, "Flyttal",  98.23);
  jsonObjectStart(f, "kalle");
  jsonString(f,"aaa","bbb");
  jsonBoolean(f,"bool", 1);
  jsonInt(f,"integer", 3234234);
  jsonObjectEnd(f);
  jsonObjectStart(f, "kalle2");
  jsonString(f,"aaa","bbb");
  jsonBoolean(f,"bool", 1);
  jsonInt(f,"integer", 3234234);
  jsonObjectEnd(f);
  jsonInt(f, "asd", 1234);
  jsonArrayStart(f, "filer");
  jsonObjectStart(f,NULL);
  jsonString(f,"namn", "testing.txt");
  jsonInt(f,"storlek", 2345);
  jsonObjectEnd(f);
  jsonObjectStart(f,NULL);
  jsonString(f,"namn", "nisse.c");
  jsonInt(f,"storlek", 345234);
  jsonObjectEnd(f);
  jsonArrayEnd(f);
  
  jsonObjectStart(f, "bosse");
  jsonString(f,"aaa","bbb");
  jsonBoolean(f,"bool", 1);
  jsonInt(f,"integer", 3234234);
  jsonObjectEnd(f);
  jsonEnd(f);
  
}


void *httpT(void *threadid) {
  printf("Starting httpthread\n");
  swill_handle("ten.txt", count_to_ten, 0);
  swill_handle("jsonTest", jsonTest, 0);
  swill_file("index.html", "html/index.html");
  swill_init(8080);
  while (1) {
    swill_serve();
  }
}