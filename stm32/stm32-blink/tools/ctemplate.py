#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# C/C++ template generator
#
# File:   ctemplate.py
# Author: Peter Malmberg <peter.malmberg@gmail.com>
# Date:   2016-02-19
# Version: 0.2
# Python:  >=3
# Licence: MIT
# 
# -----------------------------------------------------------------------
# History
#
# Todo 
#
# Imports -------------------------------------------------------------------

import sys
import os 
import traceback
import logging
import argparse
from datetime import datetime, date, time

# Settings ------------------------------------------------------------------

AppName     = "ctemplate"
AppVersion  = "0.2"
AppLicence  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmberg@gmail.com>"

# Uncomment to use logfile
#LogFile     = "pyplate.log"

# Code ----------------------------------------------------------------------

            
def addHeader(file, fileName, brief, date, author, license):
    header = headerExample

    header = header.replace("__FILENAME__", fileName )
    header = header.replace("__BRIEF__",    brief    )
    header = header.replace("__DATE__",     date     )
    header = header.replace("__AUTHOR__",   author   )    
    header = header.replace("__LICENSE__",  license  )
    file.write(header)

    
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

def addInclude(file, includeFile):  
  file.write("#include <"+includeFile+">\n")  
    
def addCIncludes(file):
    addInclude(file, "stdio.h")
    addInclude(file, "stdlib.h")
    addInclude(file, "sys/types.h")
    addInclude(file, "unistd.h")
    addInclude(file, "signal.h")
    addInclude(file, "string.h")
    addInclude(file, "errno.h")
  
def addGTKIncludes(file):
    addInclude(file, "gtk/gtk.h")
  
def addQtIncludes(file):
    addInclude(file, "QApplication")
    addInclude(file, "QCoreApplication")
    addInclude(file, "QDebug")
    addInclude(file, "QMainWindow")
    addInclude(file, "QPushbutton")
    addInclude(file, "QLabel")
        
def addMain(file):
  file.write("int main(int argc, char *argv[]) {\n\n")
  file.write("  return 0;\n")    
  file.write("}\n")
  

def newFile(dir, fileName):
  # Open files to be generated
  try:
    file = open(dir+"/"+fileName, 'w')
    return file
  except IOError:
    logging.debug("Could not open file %s" % (fileName))
    exit()


def askInfo(module):
    print("Creating new "+module)
    fName = input("Enter "+module+" name(no extention:>")
    brief = input("Enter brief description:> ")
    
    date = datetime.now().strftime("%Y-%m-%d")    
    return fName, brief, date
  
def newCModule(dir, author, licence):
    newModule(dir, author, licence, "c")

def newCppModule(dir, author, licence):
    newModule(dir, author, licence, "cpp")

def newModule(dir, author, licence, lan):
    
    # ask for some information
    fName, brief, date = askInfo("C module")

    main = query_yn("Add main() function", "no")

    
    if main and lan=="c":
        gtkMain = query_yn("GTK project", "no")
    else:
        gtkMain = 0
        
    if main and lan=="cpp":    
        qtMain = query_yn("Qt project", "no")
    else:
        qtMain = 0
    
    fileNameC = fName + "."+lan
    fileNameH = fName + ".h"

    # Open files to be generated
    fileC = newFile(dir, fileNameC)
    fileH = newFile(dir, fileNameH)

    # Populate C file
    addHeader(fileC, fileNameC, brief, date, author, licence)

    addSection(fileC, "Includes")
    
    if (main):
        addCIncludes(fileC)
        
    fileC.write("#include \""+fileNameH+"\"\n\n");
    
    addSection(fileC, "Macros")
    addSection(fileC, "Variables")
    addSection(fileC, "Prototypes")
    addSection(fileC, "Code")    
    
    if (gtkMain):
        fileC.write(gtkMainExample)
    else:
        if (main):
            fileC.write(mainExample)
        

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

def printInfo():
    print("Script name    " + AppName)
    print("Script version " + AppVersion)
    print("Script path    " + os.path.realpath(__file__))


    
def newProject(dir, author, license):
    print(scriptPath)
    print(mpPath)
 
#    projName = input("Enter project name:> ")
#    subDir = query_yn("Create subdirectory?", "yes")
    
    lan = query_list("Enter language", [ "C", "C++" ], "C")
    return 
    if subDir:
        os.mkdir(projName)
    
        
# Absolute path to script itself        
scriptPath = os.path.abspath(os.path.dirname(sys.argv[0]))
mpPath     = scriptPath+"/.."    

def main():
    logging.basicConfig(level=logging.DEBUG)
    
    # options parsing
    parser = argparse.ArgumentParser(description="Makeplate C/C++ template generator")
    parser.add_argument("--newc",     action="store_true", help="Create a new C and H file set")
    parser.add_argument("--newcpp",   action="store_true", help="Create a new C++ and H file set")
    parser.add_argument("--newclass", action="store_true", help="Create a new C++ class")
    parser.add_argument("--newQt",    action="store_true", help="Create a new Qt project")
    parser.add_argument("--newgtk",   action="store_true", help="Create a new GTK project")
    parser.add_argument("--newproj",  action="store_true", help="Create a new Makeplate project")
    parser.add_argument("--giti",     action="store_true", help="Create a .gitignore file")
    
    parser.add_argument("--license",  type=str,            help="License of new file",           default="")
    parser.add_argument("--author",   type=str,            help="Author of file",                default="")
    parser.add_argument("--dir",      type=str,            help="Directory where to store file", default=".")
#    parser.add_argument("--header",   type=str,            help="External header file",  default="headerExample")
    
    args = parser.parse_args()

    if args.newc:
        newCModule(args.dir, args.author, args.license)
        exit(0)
        
    if args.newclass:
        newClass(args.dir, args.author, args.license)
        exit(0)
        
    if args.newcpp:
        newCppModule(args.dir, args.author, args.license)
        exit(0)

    if args.newgtk:
        newCppModule(args.dir, args.author, args.license)
        exit(0)
        
    if args.newQt:
        newCppModule(args.dir, args.author, args.license)
        exit(0)
        
    if args.newproj:
        newProject(args.dir, args.author, args.license)
        exit(0)
        
    if args.giti:
        file = newFile(args.dir, ".gitignore")
        file.write(gitIgnore)
        file.close()
        exit(0)
        
    parser.print_help()
    exit(0)    

    
def query_list(question, db, default="yes"):
    prompt = " >"

    #print(db)
    while 1:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        print(choice)
        for x in db:
            if (x.lower()==choice):
                return x
            
        print("\nPlease resplond with: ")
        for c in db:
            print("  "+c)
            
    
def query_yn(question, default="yes"):
    valid = {"yes": True, "y": True, "ye": True, "no": False, "n": False}
    if default is None:
        prompt = " [y/n] "
    elif default == "yes":
        prompt = " [Y/n] "
    elif default == "no":
        prompt = " [y/N] "
    else:
        raise ValueError("invalid default answer: '%s'" % default)
    
    while True:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        if default is not None and choice == '':
            return valid[default]
        elif choice in valid:
            return valid[choice]
        else:
            sys.stdout.write("Please respond with 'yes' or 'no' (or 'y' or 'n').\n")
    
    
headerExample="""/**
 *---------------------------------------------------------------------------
 * @brief    __BRIEF__
 *
 * @file     __FILENAME__
 * @author   __AUTHOR__
 * @date     __DATE__
 * @license  __LICENSE__
 *
 *---------------------------------------------------------------------------
 *
 *
 */
"""    
    
gtkMainExample="""

int main(int argc, char *argv[]) {
 
    signal(SIGINT, sigInt);
    signal(SIGHUP, sigHup);


// GTK Glade --------------------------------------------------------------------

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "gtkTest.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window2"));
    gtk_builder_connect_signals(builder, NULL);

    //g_object_unref(builder);

    GtkWidget *w;
    GtkTextIter iter;
    w = gtk_builder_get_object(builder, "textview2");
    //gtk_text_view_set_buffer(w, buf);
    buf = gtk_text_view_get_buffer(w);
    gtk_text_buffer_get_iter_at_offset(buf, &iter, 0);
    gtk_text_buffer_insert(buf, &iter, "Kalle", -1);
    
    return 0;
}
"""

glibMainExample="""
"""

mainExample="""
int main(int argc, char *argv[]) {
        
    return 0;
}
"""

qtCoreMainExample="""
int main(int argc, char *argv[]) {
 
    QCoreApplication app(argc, argv);
         
    return app.exec();
}
"""

qtMainExample="""
int main(int argc, char *argv[]) {
 
    QApplication app(argc, argv);
//    MainWindow w;
//    w.show();
         
    return app.exec();
}
"""


gitIgnore="""
#
# Makeplate .gitignore file
#
# 
# 
#


# Makeplate specific files
#--------------------------------------------------------------------
archive
backup
output
personal*.mk

# Temporary files
#--------------------------------------------------------------------
*.tmp
*.old
*.orig
*~

# Revision control
#--------------------------------------------------------------------
.svn
.git

# C/C++
#--------------------------------------------------------------------

# Object files
*.o
*.ko
*.obj
*.elf
*.lo
*.slo

# Symbols etc
*.lst
*.sym
*.map
*.lss

# Precompiled Headers
*.gch
*.pch

# Static Libraries
*.lib
*.a
*.la
*.lo
*.lai

# Shared libraries (inc. Windows DLLs)
*.dll
*.so
*.so.*
*.dylib

# Executables
*.exe
*.out
*.app
*.i*86
*.x86_64
*.hex
*.bin
*.elf
*.a

# Debug files
*.dSYM/

# Makefile specific
#--------------------------------------------------------------------
*.d
.dep


# Qt 
#--------------------------------------------------------------------
*.moc
moc_*.h
moc_*.cpp
*_moc.h
*_moc.cpp
qrc_*.cpp
ui_*.h

# QtCreator Qml
*.qmlproject.user
*.qmlproject.user.*

# QtCtreator CMake
CMakeLists.txt.user*
"""


if __name__ == "__main__":
    try:
        main()
        sys.exit(0)
    except KeyboardInterrupt as e: # Ctrl-C
        raise e
    except SystemExit as e:        # sys.exit()
        raise e
    except Exception as e:
        print('ERROR, UNEXPECTED EXCEPTION')
        print(str(e))
        traceback.print_exc()
        os._exit(1)

        
