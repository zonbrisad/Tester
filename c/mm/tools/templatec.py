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
from dataclasses import dataclass, field
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

    main_loop_begin_text: str = ""
    main_loop_middle_text: str = ""
    main_loop_end_text: str = ""

    main_end_text: str = ""

    h_post_text: str = ""

    query_text: str = ""
    query: bool = True
    incl: bool = True

    sub: list[TemplateC] = field(default_factory=list)

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

        self.main_loop_begin_text += a.main_loop_begin_text
        self.main_loop_middle_text += a.main_loop_middle_text
        self.main_loop_end_text = a.main_loop_end_text + self.main_loop_end_text

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
        "h_prototypes_text",
    ]

    def to_json(self) -> dict:
        jsonDict = {}
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


t_separators = TemplateC(
    c_includes_text="""
// Include -------------------------------------------------
""",
    c_macros_text="""  
// Macros --------------------------------------------------
""",
    c_prototypes_text="""
// Prototypes ----------------------------------------------
""",
    c_datatypes_text="""
// Datatypes -----------------------------------------------
""",
    c_variables_text="""
//  Variables ----------------------------------------------
""",
    c_code_text="""
// Code ----------------------------------------------------
""",
    h_includes_text="""
// Include -------------------------------------------------
""",
    h_macros_text="""  
// Macros --------------------------------------------------
""",
    h_prototypes_text="""
// Prototypes ----------------------------------------------
""",
    h_datatypes_text="""
// Datatypes -----------------------------------------------
""",
    h_variables_text="""
//  Variables ----------------------------------------------
""",
)


t_common_includes = TemplateC(
    query_text="Add common includes?",
    c_includes_text="""\
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
""",
)

t_main = TemplateC(
    main_begin_text="""\
int main(int argc, char *argv[]) {
""",
    main_end_text="""\
    return 0;
}
""",
)

t_main_embeded = TemplateC(
    main_begin_text="""\
int main() {
""",
    main_end_text="""\
  return 0;
}
""",
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
)

t_avr_adc = TemplateC(
    query_text="ATmega 10 bit adc",
    h_macros_text="""\
// AVR ADC ------------------------------------------------------------------

#define ADC_ENABLE()     ADCSRA |= (1<<ADEN)   // Enable continuous conversion
#define ADC_DISSABLE()   ADCSRA &= ~(1<<ADEN)  // Dissable continuous conversion
#define ADC_START()      ADCSRA |= (1<<ADSC)   // Start single conversion
#define ADC_IE()         ADCSRA |= (1<<ADIE)   // Enable ADC interrupt
#define ADC_ID()         ADCSRA &= ~(1<<ADIE)  // Enable ADC interrupt

#define ADC_AUTOTRIGGER_ENABLE()  ADCSRA |= (1<<ADATE)  // ADC auto trigger enable

#define ADC_REF_AREF() ADMUX = (ADMUX & ~15)            // Set voltage reference to AREF
#define ADC_REF_AVCC() ADMUX = (ADMUX & ~15) | (1 << 6) // Set voltage reference to AVcc 
#define ADC_REF_INT() ADMUX = (ADMUX & ~15) | (3 << 6)  // Set voltage reference to 1.1 V internal reference

//#define ADC_PRESCALER_2()   ADCSRA = (ADCSRA & ~7) | 0
#define ADC_PRESCALER_2()   ADCSRA = (ADCSRA & ~7) | 0b001
#define ADC_PRESCALER_4()   ADCSRA = (ADCSRA & ~7) | 0b010
#define ADC_PRESCALER_8()   ADCSRA = (ADCSRA & ~7) | 0b011
#define ADC_PRESCALER_16()  ADCSRA = (ADCSRA & ~7) | 0b100
#define ADC_PRESCALER_32()  ADCSRA = (ADCSRA & ~7) | 0b101
#define ADC_PRESCALER_64()  ADCSRA = (ADCSRA & ~7) | 0b110
#define ADC_PRESCALER_128() ADCSRA = (ADCSRA & ~7) | 0b111
#define ADC_VALUE()         (ADCL + (ADCH << 8))

//#define ADC_TRG_FREE_RUNNING() ADCSRB = (ADCSRB & ~7) | 0
#define ADC_TRG_FREE_RUNNING() ADCSRB = (ADCSRB & 0b00000111) | 0b000
#define ADC_TRG_ANALOG_COMP()  ADCSRB = (ADCSRB & 0b00000111) | 0b001
#define ADC_TRG_EXTERNAL_INT() ADCSRB = (ADCSRB & 0b00000111) | 0b010
#define ADC_TRG_TIMER0_COMPA() ADCSRB = (ADCSRB & 0b00000111) | 0b011
#define ADC_TRG_TIMER0_OVF()   ADCSRB = (ADCSRB & 0b00000111) | 0b100
#define ADC_TRG_TIMER1_COMPB() ADCSRB = (ADCSRB & 0b00000111) | 0b101
#define ADC_TRG_TIMER1_OVF()   ADCSRB = (ADCSRB & 0b00000111) | 0b110
#define ADC_TRG_TIMER1_CPT()   ADCSRB = (ADCSRB & 0b00000111) | 0b111

#define ADC_MUX(mux) ADMUX = (ADMUX & 0b11110000) | (mux)

#define ADC_IS_BUSY() (ADCSRA & ADIF) ? 0 : 1

#define ADC_WAIT_COMPLETION()  while (ADC_IS_BUSY()) {}  // Busy wait for completion
""",
    c_code_text="""\
ISR(ADC_vect) {
  
}
""",
    hw_init_code_text="""""",
)

t_avr_timer1 = TemplateC(
    query_text="ATmega 16 bit timer 1",
    h_macros_text="""\
// AVR Timer 0 (8 bit) ------------------------------------------------------

// Clock source
#define TIMER0_CLK_DISSABLE()     TCCR0B &= 0xF8              // Disable timer
#define TIMER0_CLK_PRES_1()       TCCR0B |= 1                 // Select prescaler 1/1
#define TIMER0_CLK_PRES_8()       TCCR0B |= 2                 // Select prescaler 1/8
#define TIMER0_CLK_PRES_64()      TCCR0B |= 3                 // Select prescaler 1/64
#define TIMER0_CLK_PRES_256()     TCCR0B |= 4                 // Select prescaler 1/256
#define TIMER0_CLK_PRES_1024()    TCCR0B |= 5                 // Select prescaler 1/1024
#define TIMER0_CLK_EXT_FE()       TCCR0B |= 6                 // External T0 falling edge
#define TIMER0_CLK_EXT_RE()       TCCR0B |= 7                 // External T0 rising edge

// Interrupt control
#define TIMER0_OVF_IE()           TIMSK0 |= (1<<TOIE0)        // Enable overflow interrupt
#define TIMER0_OVF_ID()           TIMSK0 &= ~(1<<TOIE0)       // Disable overflow interrupt
#define TIMER0_OCA_IE()           TIMSK0 |= (1<<OCIE0A)       // Enable output compare A interrupt
#define TIMER0_OCA_ID()           TIMSK0 &= ~(1<<OCIE0A)      // Disable output compare A interrupt
#define TIMER0_OCB_IE()           TIMSK0 |= (1<<OCIE0B)       // Enable output compare B interrupt
#define TIMER0_OCB_ID()           TIMSK0 &= ~(1<<OCIE0B)      // Disable output compare B interrupt

#define TIMER0_OCA_SET(x)         OCR0A = x                   // Set output compare A register
#define TIMER0_OCB_SET(x)         OCR0B = x                   // Set output compare B register
#define TIMER0_RELOAD(x)          TCNT0 = x                   // Reload timer register


// AVR Timer 1 (16 bit) -----------------------------------------------------

// Clock source
#define TIMER1_CLK_NONE()         TCCR1B &= 0xF8              // Disable timer
#define TIMER1_CLK_PRES_1()       TCCR1B |= 1                 // Select prescaler 1/1            
#define TIMER1_CLK_PRES_8()       TCCR1B |= 2                 // Select prescaler 1/8           
#define TIMER1_CLK_PRES_64()      TCCR1B |= 3                 // Select prescaler 1/64          
#define TIMER1_CLK_PRES_256()     TCCR1B |= 4                 // Select prescaler 1/256         
#define TIMER1_CLK_PRES_1024()    TCCR1B |= 5                 // Select prescaler 1/1024        
#define TIMER1_CLK_EXT_FE()       TCCR1B |= 6                 // External T0 falling edge       
#define TIMER1_CLK_EXT_RE()       TCCR1B |= 7                 // External T0 rising edge        

// Interrupt control
#define TIMER1_OVF_IE()           TIMSK1 |= (1<<TOIE1)        // Enable overflow interrupt      
#define TIMER1_OVF_ID()           TIMSK1 &= ~(1<<TOIE1)       // Disable overflow interrupt     
#define TIMER1_OCA_IE()           TIMSK1 |= (1<<OCIE1A)       // Enable output compare A interrupt
#define TIMER1_OCA_ID()           TIMSK1 &= ~(1<<OCIE1A)      // Disable output compare A interrupt
#define TIMER1_OCB_IE()           TIMSK1 |= (1<<OCIE1B)       // Enable output compare B interrupt
#define TIMER1_OCB_ID()           TIMSK1 &= ~(1<<OCIE1B)      // Disable output compare B interrupt
                                                              
                                                              // Set output compare A register
#define TIMER1_OCA_SET(x)         OCR1AH = (uint8_t) ((uint16_t)x>>8); OCR1AL = (uint8_t) ((uint16_t)x & 0xff)
                                                              // Set output compare B register
#define TIMER1_OCB_SET(x)         OCR1BH = (uint8_t) ((uint16_t)x>>8); OCR1BL = (uint8_t) ((uint16_t)x & 0xff)
                                                              // Reload timer register
#define TIMER1_RELOAD(x)          TCNT1H = (uint8_t) ((uint16_t)x>>8); TCNT1L = (uint8_t)((uint16_t)x & 0xff)
""",
    c_code_text="""\
ISR(TIMER1_COMPA_vect) {

  TIMER1_RELOAD(0);

}    
""",
    hw_init_code_text="""\
  // Timer 1 (16 bit)
  TIMER1_CLK_PRES_256(); // set prescaler to 1/1024
  TIMER1_OCA_SET(625);
  TIMER1_OCA_IE();        // enable output compare A interrupt
""",
)

t_avr = TemplateC(
    query_text="Avr main code",
    query=False,
    sub=[t_avr_uart, t_avr_timer1, t_avr_adc],
    h_macros_text="""
// AVR Reset causes ---------------------------------------------------------
#define IS_POWER_ON_RESET()            (MCUSR & (1<<PORF))
#define IS_BROWN_OUT_RESET()           (MCUSR & (1<<BORF))
#define IS_WATCH_DOG_RESET()           (MCUSR & (1<<WDRF))
#define IS_JTAG_RESET_RESET()          (MCUSR & (1<<JTRF))
#define IS_EXTERNAL_RESET()            (MCUSR & (1<<EXTRF))
#define CLEAR_RESETS()                 MCUSR  &= (~31)              // clearing all reset causes

// AVR Reset MCU with watchdog ----------------------------------------------
#define RESET()                     wdt_enable(WDTO_500MS); while(1) {}

""",
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
    hw_init_begin_text="""
void hw_init(void) {
""",
    hw_init_end_text="""\
  sei();  // Enable all interrupts
} 
""",
    main_func_text="""
  hw_init();
""",
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
""",
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
""",
)


t_abstract_datatype_update = TemplateC(
    query_text="Include update command?",
    h_prototypes_text="""
void __PREFIX___update(__STRUCT__ *__VAR__);
""",
    c_code_text="""
void __PREFIX___update(__STRUCT__ *__VAR__) {
  
}
""",
)


t_abstract_datatype = TemplateC(
    query=False,
    sub=[t_abstract_datatype_update],
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

""",
)


t_lef_cli = TemplateC(
    query_text="Include CLI",
    c_prototypes_text="""\
void cmdHelp(char *args);
""",
    c_code_text="""
void cmdHelp(char *args) {
  LEF_Cli_print();
}
""",
    c_variables_text="""
const PROGMEM LEF_CliCmd commands[] = {
  
  {cmdHelp,   "help",      "Show help"},
};

""",
    main_begin_text="""\
  LEF_Cli_init(commands, sizeof(commands) / sizeof((commands)[0]) );
""",
    main_loop_middle_text="""\
      case LEF_EVENT_CLI:
        LEF_Cli_exec();
        break;
""",
)

t_lef_button = TemplateC(
    query_text="Include Button",
    c_macros_text="""\
#define EVENT_BUTTON1 1
""",
    c_variables_text="""\
LEF_Button button1;
""",
    main_begin_text="""\
  LEF_Button_init(&button1, EVENT_BUTTON1);
""",
    main_loop_middle_text="""\
      case EVENT_BUTTON1: break;
""",
)

t_lef_timer = TemplateC(
    query_text="Include Timer",
    c_macros_text="""\
#define EVENT_TIMER1 2
""",
    c_variables_text="""\
LEF_Timer timer1;
""",
    main_begin_text="""\
  LEF_Timer_init(&timer1, EVENT_TIMER1);
""",
    main_loop_middle_text="""\
      case EVENT_TIMER1: break;
""",
)

t_lef_led = TemplateC(
    query_text="Include LED",
    c_variables_text="""\
LEF_Led led1;
""",
    main_begin_text="""\
  LEF_Led_init(&led1, LED_OFF);
""",
)

t_lef_buzzer = TemplateC(
    query_text="Include Buzzer",
    main_begin_text="""\
  LEF_Buzzer_init();
""",
)

t_lef = TemplateC(
    query_text="Include LEF?",
    sub=[t_lef_buzzer, t_lef_cli, t_lef_timer, t_lef_led, t_lef_button],
    c_includes_text="""
#include "LEF.h"
""",
    c_variables_text="""""",
    main_vars_text="""
  LEF_Event event;
""",
    main_begin_text="""
  LEF_init();
""",
    main_loop_begin_text="""
  while (1) {
    LEF_Wait(&event);
    switch (event.id) {
""",
    main_loop_end_text="""\
      default: break;
    }
  }
""",
)


def main() -> None:
    pass


if __name__ == "__main__":
    main()
