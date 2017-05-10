#
#
#

#
# Defines
#
DEFINES += 


#
# Build template
#
# app     - Creates makefile to build application
# lib     - Creates makefile to build library
# subdirs - Creates makefile containing rules for the subdirs specified in SUBDIRS var
# vcapp   - Creates Visual studio project file to build a application
# vclib   - Creates Visual studio project file to build a library
#
TEMPLATE = app

TARGET = hw
DEPENDPATH += .
INCLUDEPATH += .
DESTDIR += 
OBJECTS_DIR = objs
MOC_DIR     = objs
DEPEND_PATH = depend

#
# Config
#
# qt      - link against QT lib
# thread  - Multithreaded application
# x11     - X11 application or library
# windows - Win32 windows application
# console - Win32 console application
# dll     -
#
CONFIG += qt 

#
# QT
#
# core    - QtCore module
# gui     - QtGui module
# network - QtNetwork module
# opengl  - QtOpenGL module
# sql     - QtSql module
# svg     - QtSvg module
# xml     - QtXml module
# xmlpatterns - QtXmlPatterns module
# qt3support  - Qt3Support module
#
QT = core gui widgets

#
# Header files
#
HEADERS += MainWindows.h

#
# Sourcefiles
#
SOURCES += main.cpp MainWindow.cpp


#
# Libs
#
LIBS += 

#
# Resource files
#
RESOURCES +=


#
# Win32 specific
#
win32 {
}

#
# Unix specific
#
unix {
}





