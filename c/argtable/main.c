/**
 *---------------------------------------------------------------------------
 * @brief    argtable test
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-04-06
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

#include "argtable3.h"
#include "main.h"




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

int main(int argc, char *argv[]) {
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
  // verify the argtable[] entries were allocated sucessfully 
  if (arg_nullcheck(argtable) != 0) {
    // NULL entries were detected, some allocations must have failed 
    printf("%s: insufficient memory\n",APP_NAME);
    exitcode=1;
    goto appexit;
  }
  
  // Parse the command line as defined by argtable[] 
  nerrors = arg_parse(argc,argv,argtable);
  
  // special case: '--help' takes precedence over error reporting 
  if (opt_help->count > 0) {
    printf("Usage: %s", APP_NAME);
    arg_print_syntax(stdout,argtable,"\n");
    arg_print_glossary(stdout,argtable,"  %-25s %s\n");
    exitcode=0;
    goto appexit;
  }
  
  // If the parser returned any errors then display them and exit 
  if (nerrors > 0) {
    // Display the error details contained in the arg_end struct.
    arg_print_errors(stdout,end,APP_NAME);
    printf("Try '%s --help' for more information.\n", APP_NAME);
    exitcode=1;
    goto appexit;
  }
  
  // special case: '--version' takes precedence error reporting 
  if (opt_version->count > 0) {
    printf("'%s' version %s\n",APP_NAME, APP_VERSION);
    exitcode=0;
    goto appexit;
  }
  
  if (opt_bool->count > 0) {
    printf("Bool argument\n");
  }
        
  if (opt_int->count > 0) {
    printf("Integer argument %d\n", *opt_int->ival);
  }
                
  if (opt_dbl->count > 0) {
    printf("Double argument %f\n", *opt_dbl->dval);
  }
  
  if (opt_str->count > 0) {
    printf("String argument %s\n", *opt_str->sval);
  }
                                
  if (opt_file->count > 0) {
    printf("File argument filename  %s\n", *opt_file->filename);
    printf("File argument basename  %s\n", *opt_file->basename);
    printf("File argument extension %s\n", *opt_file->extension);
  }
                                                
  if (opt_intn->count > 0) {
    printf("Integer arguments %d\n", opt_intn->count);
    for (i=0;i<opt_intn->count;i++) {
      printf("Arg %d = %d\n", i, opt_intn->ival[i]);
    }
  }
appexit:
    
  // deallocate each non-null entry in argtable[] 
  arg_freetable(argtable,sizeof(argtable)/sizeof(argtable[0]));
  
  return exitcode;
    return 0;
}
