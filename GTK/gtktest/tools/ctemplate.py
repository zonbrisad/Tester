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
  

def addMethod(file, className, methodName): 
  file.write(className+"::"+methodName+"() {\n")
  file.write("\n}\n\n")
  

def addClass(file, className):
  file.write("class "+className+" {\n")
  file.write("    public:\n")    
  file.write("      "+className+"();\n")
  file.write("}\n")
     
 
def newFile(dir, fileName):
  # Open files to be generated
  try:
    file = open(dir+"/"+fileName, 'w')
    return file
  except IOError:
    logging.debug("Could not open template file %s" % (fileName))
    exit()


def askInfo(module):
    print("Creating new "+module)
    fName = input("Enter "+module+" name(no extention:>")
    brief = input("Enter brief description:> ")
    date = datetime.now().strftime("%Y-%m-%d")
    return fName, brief, date
  
def newModule(dir, author, licence):
    
    # ask for some information
    fName, brief, date = askInfo("C module")

    fileNameC = fName + ".c"
    fileNameH = fName + ".h"

    # Open files to be generated
    fileC = newFile(dir, fileNameC)
    fileH = newFile(dir, fileNameH)

    # Populate C file
    addHeader(fileC, fileNameC, brief, date, author, licence)

    addSection(fileC, "Includes")
    
    fileC.write("#include \""+fileNameH+"\"\n\n");
    
    addSection(fileC, "Macros")
    addSection(fileC, "Variables")
    addSection(fileC, "Prototypes")
    addSection(fileC, "Code")    
    
    # Populate H file
    addHeader(fileH, fileNameH, brief, date, author, licence)
    addSentinelBegin(fileH, fName.upper())
    addCppSentinel(fileH)
    addSection(fileH, "Includes")
    addSection(fileH, "Macros")
    addSection(fileH, "Typedefs")
    addSection(fileH, "Variables")
    addSection(fileH, "Prototypes")
    addCppSentinelEnd(fileH)
    addSentinelEnd(fileH)
 
    # Close down files
    fileC.close()
    fileH.close()
    
def newClass(dir, author, licence):

    # ask for some information
    fName, brief, date = askInfo("C++ Class")

    fileNameC = fName + ".cpp"
    fileNameH = fName + ".h"

    # Open files to be generated
    fileC = newFile(dir, fileNameC)
    fileH = newFile(dir, fileNameH)

    # Populate C++ file
    addHeader(fileC, fileNameC, brief, date, author, licence)
    addSection(fileC, "Includes")
    fileC.write("#include \""+fileNameH+"\"\n\n");
    
    addSection(fileC, "Macros")
    addSection(fileC, "Variables")
    addSection(fileC, "Prototypes")
    addSection(fileC, "Code")    
    
    addMethod(fileC, fName, fName)
    
    # Populate H file
    addHeader(fileH, fileNameH, brief, date, author, licence)

    addSentinelBegin(fileH, fName.upper())    
    addSection(fileH, "Includes")
    addSection(fileH, "Macros")
    addSection(fileH, "Typedefs")
    addSection(fileH, "Variables")
    
    addClass(fileH, fName)
      
    addSentinelEnd(fileH)
    
    # Close down files
    fileC.close()
    fileH.close()


    
if __name__ == "__main__":
    logging.basicConfig(level=logging.DEBUG)

    # options parsing
    parser = argparse.ArgumentParser(description="C/C++ template generator")
    parser.add_argument("--newc",     action="store_true", help="Create a new C and H file set")
    parser.add_argument("--newcpp",   action="store_true", help="Create a new C++ and H file set")
    parser.add_argument("--newclass", action="store_true", help="Create a new C++ class")
    parser.add_argument("--licence",  type=str,            help="Licence of new file", default="")
    parser.add_argument("--author",   type=str,            help="Author of file",      default="")
    parser.add_argument("--dir",      type=str,            help="Directory where to store file",  default=".")
    
    args = parser.parse_args()
    
    if args.newc:
        newModule(args.dir, args.author, args.licence)
        exit
        
    if args.newclass:
        newClass(args.dir, args.author, args.licence)
        exit
        
    if args.newcpp:
        print("To be implemented.")
        exit
