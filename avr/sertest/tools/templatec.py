#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# c/c++ templates
#
# File:     templatec.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-03-13
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

from __future__ import annotations
from dataclasses import dataclass
import json
import os

@dataclass
class TemplateC:
    text: str = ""

    header_text: str = ""

    h_pre_text: str = ""
    h_includes_text: str = ""
    h_macros_text: str = ""
    h_datatypes_text: str = ""
    h_variables_text: str = ""
    h_prototypes_text: str = ""

    c_includes_text: str = ""
    c_macros_text: str = ""
    c_datatypes_text: str = ""
    c_variables_text: str = ""
    c_prototypes_text: str = ""
    c_code_text: str = ""

    hw_init_begin_text: str = ""
    hw_init_vars_text: str = ""
    hw_init_code_text: str = ""
    hw_init_end_text: str = ""
    
    main_begin_text: str = ""
    main_vars_text: str = ""
    main_func_text: str = ""
    main_end_text: str = ""

    h_post_text: str = ""

    query_text: str = ""
    query: bool = True
    incl: bool = True

  
    def add(self, a: TemplateC):
        self.header_text += a.header_text

        self.h_includes_text += a.h_includes_text
        self.h_macros_text += a.h_macros_text
        self.h_datatypes_text += a.h_datatypes_text
        self.h_variables_text += a.h_variables_text
        self.h_prototypes_text += a.h_prototypes_text

        self.c_includes_text += a.c_includes_text
        self.c_macros_text += a.c_macros_text
        self.c_datatypes_text += a.c_datatypes_text
        self.c_variables_text += a.c_variables_text
        self.c_prototypes_text += a.c_prototypes_text
        self.c_code_text += a.c_code_text

        self.hw_init_begin_text += a.hw_init_begin_text
        self.hw_init_vars_text += a.hw_init_vars_text
        self.hw_init_code_text += a.hw_init_code_text
        self.hw_init_end_text = a.hw_init_end_text + self.hw_init_end_text

        self.main_begin_text += a.main_begin_text
        self.main_vars_text += a.main_vars_text
        self.main_func_text += a.main_func_text
        self.main_end_text += a.main_end_text

        self.h_pre_text += a.h_pre_text
        self.h_post_text += a.h_post_text


    def write_field(self, fieldname, filename: str):
        data = getattr(fieldname)
        with open(filename, "w") as file:
            file.write(data)

    def load_field(self, fieldname, filename: str):
      pass

    list = [
        "header_text",
        "h_pre_text",
        "h_includes_text",
        "h_macros_text",
        "h_datatypes_text",
        "h_variables_text",
        "h_prototypes_text"
    ]
    
    def to_json(self) -> dict:
        jsonDict={}
        for param in self.list:
            jsonDict[param] = getattr(self, param)
        
        return jsonDict

    def from_json(self, jdict):
        for param in self.list:
            setattr(self, jdict[param])
      
    def write(self, filename):
        with open(filename, "w") as outfile:
            json.dump(self.to_json(), outfile, indent=4)

    def load(self, filename):
        if not os.path.exists(filename):
            self.write()

        with open(filename, "r") as infile:
            jdict = json.load(infile)

        self.from_json(jdict)


t_header = TemplateC(
    header_text="""\
/**
 *---------------------------------------------------------------------------
 * @brief    __DESCRIPTION__
 *
 * @file     __FILENAME__
 * @author   __AUTHOR__ __EMAIL__
 * @version  __VERSION__
 * @date     __DATE__
 * @license  __LICENSE__
 *
 *---------------------------------------------------------------------------
 *
 *
 */
"""
)

t_common_includes = TemplateC(
    query_text="Add common includes?",
    c_includes_text="""\
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
"""
)

t_main = TemplateC(
    main_begin_text="""\
int main(int argc, char *argv[]) {
""",
    main_end_text="""\
    return 0;
}
"""
)

t_main_embeded = TemplateC(
    main_begin_text="""\
int main() {
""",
    main_end_text="""\
  return 0;
}
"""
)




t_avr = TemplateC(
    query_text="Avr main code",
    query=False,
    c_includes_text="""\
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>
#include <stdio.h>
#include <stdlib.h>
""",
    c_variables_text="""\
""",
    c_prototypes_text="""\
void hw_init(void);
""",
    hw_init_begin_text="""\
void hw_init(void) {
""",
  hw_init_end_text="""\
}

""",
    main_func_text="""\
  hw_init();
"""   
)


t_avr_uart = TemplateC(
    query_text="Include setup for avr UART. (Peter Fleuryś lib)",
    query=True,
    c_includes_text="""\
#include "uart.h"
""",
    c_macros_text="""\
#define UART_BAUD_RATE 9600
""",
    c_variables_text="""\
static FILE mystdout = FDEV_SETUP_STREAM((void*)uart_putc, NULL, _FDEV_SETUP_WRITE);
""",
    hw_init_vars_text="""\
  stdout = &mystdout;
""",
  hw_init_code_text="""\
  uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));
""",
  hw_init_end_text="""\
  sei();  // Enable all interrupts
""" 
)


t_sentinel = TemplateC(
    query_text="Do you want sentinels?",
    h_pre_text="""\
        
#ifndef __FILE__
#define __FILE__
""",
    h_post_text="""\

#endif // __FILE__ 
""",
)


t_cplusplus = TemplateC(
    query_text="Do you want include 'extern' linkage?",
    h_pre_text="""\
        
#ifdef __cplusplus
extern "C"
#endif
""",
    h_post_text="""\
        
#ifdef __cplusplus
} //end brace for extern "C"
#endif
""",
)

t_app_info = TemplateC(
    query_text="Add application data?",
    h_macros_text="""\
#define APP_NAME        "__NAME__"
#define APP_VERSION     "0.01"
#define APP_DESCRIPTION "__DESCRIPTION__"
#define APP_LICENSE     ""
#define APP_AUTHOR      "__AUTHOR__"
#define APP_EMAIL       "__EMAIL__"
#define APP_ORG         "__ORGANISATION__"
#define APP_HOME        ""
#define APP_ICON        ""
"""
)

t_argtable = TemplateC(
    query_text="Do you want to include argtable3?", 
    c_includes_text="""\
#include "argtable3.h"
""",
    c_variables_text="""\
struct arg_lit  *opt_bool;
struct arg_int  *opt_int;
struct arg_dbl  *opt_dbl;
struct arg_str  *opt_str;
struct arg_file *opt_file;
struct arg_int  *opt_intn;

struct arg_lit  *opt_verbose;
struct arg_lit  *opt_version;
struct arg_lit  *opt_help;

struct arg_end  *end;
""",
    main_vars_text="""\
  int i;
  int nerrors;
  int exitcode=0;
  
  void* argtable[] = {
    opt_bool  = arg_lit0("b", "bool",                    "Bool option"),
    opt_int   = arg_int0("i","int","<n>",                "Integer option"),
    opt_dbl   = arg_dbl0("d","double",NULL,              "Double option"),
    opt_str   = arg_str0("s","string",NULL,              "String option"),
    opt_file  = arg_file0("f","file","<filename>",       "Filename option"),
    opt_intn  = arg_intn("n","intn",NULL,0,10,           "Multiple Integer option"),
    
    opt_verbose = arg_lit0("v","verbose,debug",          "verbose messages"),
    opt_help    = arg_lit0(NULL,"help",                  "print this help and exit"),
    opt_version = arg_lit0(NULL,"version",               "print version information and exit"),
    end         = arg_end(20)
  };
""",
    main_func_text="""\
  // verify the argtable[] entries were allocated sucessfully 
  if (arg_nullcheck(argtable) != 0) {
    // NULL entries were detected, some allocations must have failed 
    printf("%s: insufficient memory\\n",APP_NAME);
    exitcode=1;
    goto appexit;
  }
  
  // Parse the command line as defined by argtable[] 
  nerrors = arg_parse(argc,argv,argtable);
  
  // special case: '--help' takes precedence over error reporting 
  if (opt_help->count > 0) {
    printf("Usage: %s", APP_NAME);
    arg_print_syntax(stdout,argtable,"\\n");
    arg_print_glossary(stdout,argtable,"  %-25s %s\\n");
    exitcode=0;
    goto appexit;
  }
  
  // If the parser returned any errors then display them and exit 
  if (nerrors > 0) {
    // Display the error details contained in the arg_end struct.
    arg_print_errors(stdout,end,APP_NAME);
    printf("Try '%s --help' for more information.\\n", APP_NAME);
    exitcode=1;
    goto appexit;
  }
  
  // special case: '--version' takes precedence error reporting 
  if (opt_version->count > 0) {
    printf(APP_NAME " version "APP_VERSION"\\n");
    exitcode=0;
    goto appexit;
  }
  
  if (opt_bool->count > 0) {
    printf("Bool argument\\n");
  }
        
  if (opt_int->count > 0) {
    printf("Integer argument %d\\n", *opt_int->ival);
  }
                
  if (opt_dbl->count > 0) {
    printf("Double argument %f\\n", *opt_dbl->dval);
  }
  
  if (opt_str->count > 0) {
    printf("String argument %s\\n", *opt_str->sval);
  }
                                
  if (opt_file->count > 0) {
    printf("File argument filename  %s\\n", *opt_file->filename);
    printf("File argument basename  %s\\n", *opt_file->basename);
    printf("File argument extension %s\\n", *opt_file->extension);
  }
                                                
  if (opt_intn->count > 0) {
    printf("Integer arguments %d\\n", opt_intn->count);
    for (i=0;i<opt_intn->count;i++) {
      printf("Arg %d = %d\\n", i, opt_intn->ival[i]);
    }
  }
""",
    main_end_text="""\
appexit:
    
  // deallocate each non-null entry in argtable[] 
  arg_freetable(argtable,sizeof(argtable)/sizeof(argtable[0]));
  
  return exitcode;
""",
)

t_glib_options = TemplateC(
query_text="Include GLIB option parser",
  c_includes_text="""
#include <glib.h>
""",  
c_variables_text="""\
static gint      opt_integer = 42;
static gdouble   opt_double  = 42.42;
static gchar    *opt_string  = "Kalle";
static gchar    *opt_file    = "F";
static gboolean  opt_bool    = FALSE;

static gboolean  opt_verbose = FALSE;
static gboolean  opt_version = FALSE;

static GOptionEntry entries[] = {
  { "bool",     'b', 0, G_OPTION_ARG_NONE,     &opt_bool,     "Boolean option",  NULL },
  { "integer",  'i', 0, G_OPTION_ARG_INT,      &opt_integer,  "Integer option",  "nr" },
  { "string",   's', 0, G_OPTION_ARG_STRING,   &opt_string,   "String option",   "nr" },
  { "double",   'd', 0, G_OPTION_ARG_DOUBLE,   &opt_double,   "Double option",   "d"  },
  { "file",     'f', 0, G_OPTION_ARG_FILENAME, &opt_file,     "File option",     NULL },
  { "callback", 'c', 0, G_OPTION_ARG_CALLBACK, opt_callback,  "Callback option", NULL },
  
  { "verbose",  'v', 0, G_OPTION_ARG_NONE,     &opt_verbose,  "Verbose output",  NULL },
  { "version",   0,  0, G_OPTION_ARG_NONE,     &opt_version,  "Version info",    NULL },
  { NULL }
};                                                                                                                                      
""",
  c_prototypes_text="""
gboolean opt_callback(const gchar *option_name, const gchar *value, gpointer data, GError **error);
""",
c_code_text="""
gboolean opt_callback(const gchar *option_name, const gchar *value, gpointer data, GError **error) {
  printf("Callback function for option %s,  value=%s\\n", option_name, value);
  return 1;
}
""",
main_vars_text="""\
  GError *error = NULL;
  GOptionContext *context;
""",
main_func_text="""\
  context = g_option_context_new ("- what the program does");
  g_option_context_add_main_entries (context, entries, NULL);
  
  g_option_context_set_summary(context, "My summary text...");
  g_option_context_set_description(context, "My description text");
  
  if (!g_option_context_parse (context, &argc, &argv, &error)) {
    g_print ("option parsing failed: %s\\n", error->message);
    exit (1);
  }
                  
  if (opt_version) {
    printf(APP_NAME " version " APP_VERSION "\\n");
    exit(0);
  }
"""
)



t_abstract_datatype = TemplateC(
  query=False,
  h_datatypes_text="""
typedef struct {

} __STRUCT__;
""",
  h_prototypes_text="""

__STRUCT__ *__PREFIX___new();

void __PREFIX___init(__STRUCT__ *__VAR__);

void __PREFIX___free(__STRUCT__ *__VAR__);
""",
  c_includes_text="""
#include <stdlib.h>
""",
  c_code_text="""
__STRUCT__ *__PREFIX___new() {
  return malloc(sizeof(__STRUCT__));
}

void __PREFIX___init(__STRUCT__ *__VAR__) {
  
} 
 
void __PREFIX___free(__STRUCT__ *__VAR__) {  
  free(__VAR__);
}

"""
)



def main() -> None:
    pass

if __name__ == "__main__":
    main()
