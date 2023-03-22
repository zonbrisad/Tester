#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# C/C++ template generator
#
# File:   ctemplate.py
# Author: Peter Malmberg <peter.malmberg@gmail.com>
# Date:   2016-02-19
# Version: 0.3
# Python:  >=3
# Licence: MIT
# 
# -----------------------------------------------------------------------
# History
# - Ver 0.3 
# Major rewrite for better code generation
#
# Todo 
#
# Imports -------------------------------------------------------------------

import sys
import os 
import traceback
import logging
import argparse
from  pathlib import Path
from datetime import datetime, date, time

# Settings ------------------------------------------------------------------

AppName     = "ctemplate"
AppVersion  = "0.2"
AppLicense  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmberg@gmail.com>"

# Uncomment to use logfile
#LogFile     = "pyplate.log"

# Code ----------------------------------------------------------------------
class CClass():
    className = ""
    parrent   = ""
    header    = ""
    body      = ""
    
    qt        = False
    
    def __init__(self, className, parrent):
        self.className = className
        self.parrent   = parrent
        
    def addMethod(self, methodName):
        self.body += self.className+"::"+methodName+"() {\n"
        self.body += "\n}\n\n"
            
    def generate(self):
        if (self.parrent == ""):
            self.header += "class "+self.className+" {\n"
        else:
            self.header += "class "+self.className+": public "+self.parrent+" {\n"
            
        if self.qt:
            self.header += "  Q_OBJECT\n"
            
        self.header += "  public:\n"
        self.header += "      "+self.className+"();\n"
        self.header += "      ~"+self.className+"();\n"
        
        self.header += "  private slots:\n"
        
        self.header += "  private:\n"
        
        self.header += "}\n"
        
        self.addMethod(self.className)
        self.addMethod("~"+self.className)
            
    def print(self):
        self.generate()
        print(self.header)
        print(self.body)
        
        
                            
class CFile():
    moduleName = ""
    fileName   = ""
    header     = ""
    include    = ""
    defines    = ""
    variables  = ""
    prototypes = ""
    code       = ""
    main       = ""

    buf        = ""
    isHeader   = False 
    isCpp      = False
    
    def __init__(self, moduleName, conf, isHeader, isCpp):
        self.conf       = conf
        self.moduleName = moduleName
        self.isHeader   = isHeader
        self.isCpp      = isCpp
        
        if isHeader: 
            self.fileName = moduleName + ".h"
        else:
            if isCpp:
                self.fileName = moduleName + ".cpp"
            else:
                self.fileName = moduleName + ".c"
                
    def addHeader(self):
        hFileName = scriptPath + "/header.h"
        hFile = Path(hFileName)

        if hFile.is_file():            # Using external header file if existing
            try:
                f = open(hFileName, 'r+')
            except IOError:
                logging.debug("Could not open file %s" % (hFileName))
                exit()
            except:
                print ("Unexpected error:", sys.exc_info()[0])
                exit()
        
                self.header = f.read()
        else:                             # Using internal header example
            self.header = headerExample
        return
    
    def addInclude(self, fileName, local = False):
        if local:
            self.include += ("#include \""+fileName+"\"\n")
        else:
            self.include += ("#include <"+fileName+">\n")
    
    def addDefine(self, name, value):
        self.defines += ("#define  " + name + "  "+ value + "\n")

    def addVariable(self, name):
        self.variables += name

    def addPrototype(self, prototype):
        self.prototypes += prototype
    
    def addSection(self, desc):
        line = '-' * (73 - len(desc))
        self.buf += "\n// " + desc + " " + line + "\n\n"
        
    def addSentinelBegin(self, sentinel):
        self.buf +=  \
        "#ifndef "+sentinel+"_H\n"      \
        "#define "+sentinel+"_H\n\n" 
    
    def addSentinelEnd(self):
        self.buf += "#endif\n\n"

    def addCppSentinel(self):
        self.buf += \
        "#ifdef __cplusplus\n"   \
        "extern \"C\" {\n"       \
        "#endif\n\n"
     
    def addCppSentinelEnd(self): 
        self.buf +=                        \
        "#ifdef __cplusplus\n"             \
        "} //end brace for extern \"C\"\n" \
        "#endif\n"

    def addAppDefines(self):
        self.addDefine("APP_NAME        ", "\""+self.moduleName+"\"")
        self.addDefine("APP_VERSION     ", "0.01")
        self.addDefine("APP_DESCRIPTION ", "\"\"")
        self.addDefine("APP_AUTHOR      ", "\""+self.conf.author+"\"")
        self.addDefine("APP_LICENSE     ", "\""+self.conf.license+ "\"")
        self.addDefine("APP_ORG         ", "\"\"")
#    addDefine("APP_LOGFILE",     "glib.log")
#    addDefine("APP_PIDFILE",     "/tmp/glibtest.pid")

    def addComment(self, comment):
        self.buf += "  // "+comment+"\n"

    def save(self, dir):
        # Open files to be generated
        try:
            file = open(dir+"/"+self.fileName, 'w')
            file.write(self.buf)
            file.close()
        except IOError:
            logging.debug("Could not open file %s" % (fileName))
            exit()
    
    def addSignal(self, signal, handler):
        self.prototypes += "void "+handler+"(int sig);\n"
        self.code       += "void "+handler+"(int sig) {\n\n}\n\n"
        self.main       += "  signal("+signal+", "+handler+");\n"
    
    def addSignals(self):
        self.addInclude("signal.h")
        self.addSignal("SIGINT", "sigint")
        self.addSignal("SIGHUP", "sighup")
        self.addSignal("SIGUSR1", "sigusr1")
        self.addSignal("SIGUSR2", "sigusr2")
        self.addSignal("SIGTERM", "sigterm")
        
    def addGtk(self):
        #if (conf.gtk):    
        self.addInclude("gtk/gtk.h")
        

    def addQt(self):    
        #if (conf.qt):    
        self.addInclude("QApplication")
        self.addInclude("QCoreApplication")
        self.addInclude("QDebug")
        self.addInclude("QMainWindow")
        self.addInclude("QPushbutton")
        self.addInclude("QLabel")
        
        self.main += "  Q_INIT_RESOURCE(application);\n\n"
        self.main += "  QApplication app(argc, argv);\n"
        self.main += "  QCoreApplication::setOrganizationName(APP_ORG);\n"
        self.main += "  QCoreApplication::setApplicationName(APP_NAME);\n"
        self.main += "  QCoreApplication::setApplicationVersion(APP_VERSION);\n\n"
#        self.main += "  QCommandLineParser parser;\n"
#        self.main += "  parser.setApplicationDescription(QCoreApplication::applicationName());\n"
#        self.main += "  parser.addHelpOption();\n"
#        self.main += "  parser.addVersionOption();\n"
#        self.main += "  parser.addPositionalArgument("file", "The file to open.");\n"
#        self.main += "  parser.process(app);\n"
        
        self.main += "  MainWindow mainWin;\n"
#        self.main += "  if (!parser.positionalArguments().isEmpty())\n"
#        self.main += "  mainWin.loadFile(parser.positionalArguments().first());\n"
        self.main += "  mainWin.show();\n"
        self.main += "  return app.exec();\n"
        
        
    def addMain(self):
        self.main = "int main(int argc, char *argv[]) {\n\n" + self.main
        self.main += "  return 0;\n"
        self.main += "}\n"
        
    def addCIncludes(self):
        self.addInclude("stdio.h")
        self.addInclude("stdlib.h")
        self.addInclude("stdint.h")
        self.addInclude("string.h")
        self.addInclude("unistd.h")
        self.addInclude("sys/types.h")
        self.addInclude("errno.h")
 
        
    def replace(self, str, newStr):
        self.buf = self.buf.replace(str, newStr)

    def newLine(self):
        self.buf += "\n"
    
    def create(self):
        
        self.addHeader()
        
        if self.conf.main and not self.isHeader:
            self.addCIncludes()
        
        if self.conf.signals and not self.isHeader:
            self.addSignals()
            
        if self.conf.qt:
            self.addQt()
        
        
        if self.conf.main and self.isHeader:
            self.addAppDefines()

        if self.conf.main and not self.isHeader:
            self.addMain()
            
        if not self.isHeader:
            self.addInclude(self.moduleName+".h", True)

        # Sections
        self.buf = ""
        self.buf = self.buf + self.header
        
        if self.isHeader:
            self.addSentinelBegin(self.moduleName.upper())

        if self.isHeader and not self.isCpp:
            self.addCppSentinel()
        
        self.newLine()
        self.addSection("Includes")
        self.buf += self.include
        
        self.addSection("Macros")
        self.buf += self.defines

        self.addSection("Variables")
        self.buf += self.variables

        self.addSection("Prototypes")
        self.buf += self.prototypes
        
        if not self.isHeader:
            self.addSection("Code")
            self.buf = self.buf + self.code
        
        self.buf += self.main    
            
        if self.isHeader:
            self.addSentinelEnd()
        
        if self.isHeader and not self.isCpp:
            self.addCppSentinelEnd()

        self.replace("__FILENAME__", self.fileName     )
        self.replace("__BRIEF__",    self.conf.brief   )
        self.replace("__DATE__",     self.conf.date    )
        self.replace("__AUTHOR__",   self.conf.author  )    
        self.replace("__LICENSE__",  self.conf.license )
    
    def print(self):
        self.create()
        print(self.buf)


class CConf():
    main    = False
    gtk     = False
    qt      = False
    signals = False
    sigint  = False
    appName = ""
    author  = ""
    license = ""
    brief   = ""
    date    = ""
    org     = ""
    def __init__(self):
        self.date = datetime.now().strftime("%Y-%m-%d")
#        self.name    = os.getenv('BP_NAME', "")
#        self.email   = os.getenv('BP_EMAIL', "")
#        self.license = os.getenv('BP_LICENSE', "")
#        self.org     = os.getenv('BP_ORG', "")

    
def askInfo(module):
    print("Creating new "+module)
    fName = input("Enter "+module+" name(no extention:>")
    brief = input("Enter brief description:> ")
    
    date = datetime.now().strftime("%Y-%m-%d")    
    return fName, brief, date
  
def newCModule(dir, conf):
    newModule(dir, conf, False)

def newCppModule(dir, conf):
    newModule(dir, conf, True)

def newModule(dir, conf, isCpp):
    
    # ask for some information
    fName, brief, date = askInfo("C module")

    conf.main = query_yn("Add main() function", "no")
    
    conf.appName = fName
    conf.brief   = brief

    if conf.main and not isCpp:
        conf.gtk = query_yn("GTK project", "no")
        conf.signals = query_yn("Include signals", "no")
          
    if conf.main and isCpp:    
        conf.qt = query_yn("Qt project", "no")
    
    fileC = CFile(fName, conf, False, isCpp)
    fileH = CFile(fName, conf, True,  isCpp)

    fileH.print()
    fileC.print()
    
    fileH.save(dir)
    fileC.save(dir)
    
    return

def newClass(dir, conf):
    
    c = CClass("Kalle", "")
    c.print()
    
    d = CClass("Nisse", "Kalle")
    d.print()

    q = CClass("MainWindow", "QMainWindow")
    q.print()

    return

    # ask for some information
    fName, brief, date = askInfo("C++ Class")
    
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


# Get Bashplate settings
def bp():
    name    = os.getenv('BP_NAME', "")
    email   = os.getenv('BP_EMAIL', "")
    license = os.getenv('BP_LICENSE', "")
    org     = os.getenv('BP_ORG', "")
    
    return name, email, license

def main():
    
    # Get bashplates environment variables (if available)
    bpName, bpEmail, bpLicense = bp()
    
    logging.basicConfig(level=logging.DEBUG)
    
    # options parsing
    parser = argparse.ArgumentParser(description="Makeplate C/C++ template generator")
    parser.add_argument("--newc",     action="store_true", help="Create a new C and H file set")
    parser.add_argument("--newcpp",   action="store_true", help="Create a new C++ and H file set")
    parser.add_argument("--newclass", action="store_true", help="Create a new C++ class")
    parser.add_argument("--newQt",    action="store_true", help="Create a new Qt project")
    parser.add_argument("--newgtk",   action="store_true", help="Create a new GTK project")
#    parser.add_argument("--newproj",  action="store_true", help="Create a new Makeplate project")
    parser.add_argument("--giti",     action="store_true", help="Create a .gitignore file")
    parser.add_argument("--license",  type=str,  help="License of new file",           default=bpLicense)
    parser.add_argument("--author",   type=str,  help="Author of file",                default=bpName+" <"+bpEmail+">")
    parser.add_argument("--dir",      type=str,  help="Directory where to store file", default=".")
#    parser.add_argument("--header",   type=str,            help="External header file",  default="headerExample")
    
    args = parser.parse_args()
    
    conf = CConf()
    conf.author = args.author
    conf.license = args.license

    if args.newc:
        #newCModule(args.dir, args.author, args.license)
        newCModule(args.dir, conf)
        exit(0)
        
    if args.newclass:
        newClass(args.dir, conf)
        exit(0)
        
    if args.newcpp:
        newCppModule(args.dir, conf)
        exit(0)

    if args.newgtk:
        newCppModule(args.dir, conf)
        exit(0)
        
    if args.newQt:
        newCppModule(args.dir, conf)
        exit(0)
        
#    if args.newproj:
#        newProject(args.dir, args.author, args.license)
#        exit(0)
        
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


argTable="""
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

        
