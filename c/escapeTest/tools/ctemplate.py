#/usr/bin/python3
# -----------------------------------------------------------------------
# 
# C/C++ template generator
#
# File:   ctemplate.py
# Author: Peter Malmberg <peter.malmberg@gmail.com>
# Date:   2016-02-19
# Version: 0.2
# Python:  >=3
# 
# -----------------------------------------------------------------------
# History
#
# Todo 
#

import logging
import argparse
from datetime import datetime, date, time

#
# Settings
# -----------------------------------------------------------------------


#
# Code
# -----------------------------------------------------------------------

def addHeader(file, fileName, brief, date, author, licence):
    file.write( 
    "/**\n"
    " *---------------------------------------------------------------------------\n"
    " * @brief   "+brief+"\n"
    " *\n"
    " * @file    "+fileName+"\n"
    " * @author  "+author+"\n"
    " * @date    "+date+"\n"
    " * @licence "+licence+"\n"
    " *\n"
    " *---------------------------------------------------------------------------\n"
    " */\n\n")
 

def addSection(file, desc):
    line = '-' * (71 - len(desc))
    file.write("// " + desc + " " + line + "\n\n")
    
def addSection2(file, desc):
    file.write(                \
    "/**\n"                    \
    " * "+desc+"\n"            \
    " *------------------------------------------------------------------\n" \
    " */\n\n") 
    

def addSentinelBegin(file, sentinel):
    file.write(                     \
    "#ifndef "+sentinel+"_H\n"      \
    "#define "+sentinel+"_H\n\n") 

    
def addSentinelEnd(file):
    file.write("#endif\n\n")

def addCppSentinel(file):
    file.write(              \
    "#ifdef __cplusplus\n"   \
    "extern \"C\" {\n"       \
    "#endif\n\n")
     
def addCppSentinelEnd(file): 
    file.write(                        \
    "#ifdef __cplusplus\n"             \
    "} //end brace for extern \"C\"\n" \
    "#endif\n")
    
def newModule(dir, author, licence):
    print("Creating new C module")
    fName = input("Enter module name(no extention:>")
    brief = input("Enter brief description:> ")
    date = datetime.now().strftime("%Y-%m-%d")

    fileNameC = fName + ".c"
    fileNameH = fName + ".h"

    # Open files to be generated
    try:
        fileC = open(dir+"/"+fileNameC, 'w')
    except IOError:
        logging.debug("Could not open template file %s" % (fileNameC))
        return

    try:
        fileH = open(dir+"/"+fileNameH, 'w')
    except IOError:
        logging.debug("Could not open template file %s" % (fileNameH))
        return

    addHeader(fileC, fileNameC, brief, date, author, licence)

    addSection(fileC, "Includes")
    
    fileC.write("#include \""+fileNameH+"\"\n\n");
    
    addSection(fileC, "Macros")
    addSection(fileC, "Variables")
    addSection(fileC, "Prototypes")
    addSection(fileC, "Code")    
    
    addHeader(fileH, fileNameH, brief, date, author, licence)
    addSentinelBegin(fileH, fName.upper())
    addCppSentinel(fileH)
    addSection(fileH, "Includes")
    addSection(fileH, "Macros")
    addSection(fileH, "Typedefs")
    addSection(fileH, "Variables")
    addSection(fileH, "Functions")
    addCppSentinelEnd(fileH)
    addSentinelEnd(fileH)
    fileC.close()
    fileH.close()

if __name__ == "__main__":
    logging.basicConfig(level=logging.DEBUG)

    # options parsing
    parser = argparse.ArgumentParser(description="C/C++ template generator")
    parser.add_argument("--newc",    action="store_true", help="Create a new C and H file set")
    parser.add_argument("--newcpp",  action="store_true", help="Create a new C++ and H file set")
    parser.add_argument("--licence", type=str,            help="Licence of new file", default="")
    parser.add_argument("--author",  type=str,            help="Author of file",      default="")
    parser.add_argument("--dir",     type=str,            help="Directory where to store file",  default=".")
    
    args = parser.parse_args()
    
    if args.newc:
        newModule(args.dir, args.author, args.licence)
        exit
        
    if args.newcpp:
        print("To be implemented.")
        exit
