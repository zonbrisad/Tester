#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
# 
#
# File:    tect.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:    2022-08-18
# License: 
# Python:  3
# QT       5
# 
#----------------------------------------------------------------------------
# Pyplate
#   This file is generated from pyplate Python template generator.
#
# Pyplate is developed by:
#   Peter Malmberg <peter.malmberg@gmail.com>
#
# Available at:
#   https://github.com/zobrisad/pyplate.git
# 
# ---------------------------------------------------------------------------
#

# Imports -------------------------------------------------------------------

import sys
import os
import traceback
import logging
import argparse
from datetime import datetime, date, time

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

from PyQt5 import QtCore, QtWidgets

# Settings ------------------------------------------------------------------

# Application settings
AppName     = "QPlainTextEdit cursor test program"
AppVersion  = "0.1"
AppLicense  = ""
AppAuthor   = "Peter Malmberg <peter.malmberg@gmail.com>"
AppDesc     = "QTextEdit test"
AppDomain   = "Domain"
AppOrg      = "Organisation"
 
# Qt settings
WindowTitle = AppName
WindowXSize = 1000
WindowYSize = 1000

QCoreApplication.setOrganizationName(AppOrg)
QCoreApplication.setOrganizationDomain(AppDomain)
QCoreApplication.setApplicationName(AppName)

# Time to show message in ms
MsgTime     = 2000

# Code ----------------------------------------------------------------------

temp = """
Some text to initiate 
a QPlainTextEdit widget.
This is booring as hell.
asdf asdf

The end

"""

    
class MainForm(QMainWindow):
    def __init__(self, parent=None):
        super(MainForm, self).__init__(parent)
        
        # Set window size. 
        self.resize(WindowXSize, WindowYSize)
 
        # Set window title  
        self.setWindowTitle(WindowTitle) 
        
        # Create central widget
        self.centralwidget = QtWidgets.QWidget(self)
        self.setCentralWidget(self.centralwidget)
                
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.centralwidget)
        self.horizontalLayout.setContentsMargins(2, 2, 2, 2)
        self.horizontalLayout.setSpacing(2)
         
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setSpacing(2)
        self.horizontalLayout.addLayout(self.verticalLayout)

        self.vlPlain = QtWidgets.QVBoxLayout()
        self.vlPlain.setSpacing(2)
        self.horizontalLayout.addLayout(self.vlPlain)
        self.label = QtWidgets.QLabel("PlainTextEdit", self.centralwidget)
        self.vlPlain.addWidget(self.label)
        
        
        # PlaintTextEdit
        self.plainTextEdit = QtWidgets.QPlainTextEdit(self)
        self.plainTextEdit.setReadOnly(False)
        self.vlPlain.addWidget(self.plainTextEdit)
        self.plainTextEdit.setPlainText(temp)

        self.cursor = QTextCursor(self.plainTextEdit.document())
        

        self.pbAppend = QtWidgets.QPushButton("Append text", self.centralwidget)
        self.verticalLayout.addWidget(self.pbAppend)
        self.pbAppend.pressed.connect(lambda: self.plainTextEdit.appendPlainText("Text"))

        self.pbInsert = QtWidgets.QPushButton("Insert text", self.centralwidget)
        self.verticalLayout.addWidget(self.pbInsert)
        self.pbInsert.pressed.connect(self.insertText)
        
        self.pbBeg = QtWidgets.QPushButton("Move Begining", self.centralwidget)
        self.verticalLayout.addWidget(self.pbBeg)
        self.pbBeg.pressed.connect(lambda: self.moveCursor(QTextCursor.Start))

        
        self.pb1 = QtWidgets.QPushButton("Move right", self.centralwidget)
        self.verticalLayout.addWidget(self.pb1)
        self.pb1.pressed.connect(lambda: self.moveCursor(QTextCursor.Right))

        self.pb2 = QtWidgets.QPushButton("Move left", self.centralwidget)
        self.verticalLayout.addWidget(self.pb2)
        self.pb2.pressed.connect(lambda: self.moveCursor(QTextCursor.Left))

        self.pb3 = QtWidgets.QPushButton("Move up", self.centralwidget)
        self.verticalLayout.addWidget(self.pb3)
        self.pb3.pressed.connect(lambda: self.moveCursor(QTextCursor.Up))

        self.pb4 = QtWidgets.QPushButton("Move down", self.centralwidget)
        self.verticalLayout.addWidget(self.pb4)
        self.pb4.pressed.connect(lambda: self.moveCursor(QTextCursor.Down))

        self.pbDelete = QtWidgets.QPushButton("Delete", self.centralwidget)
        self.verticalLayout.addWidget(self.pbDelete)
        self.pbDelete.pressed.connect(lambda: self.cursor.deleteChar())

        self.pbDeleteRow = QtWidgets.QPushButton("Delete row", self.centralwidget)
        self.verticalLayout.addWidget(self.pbDeleteRow)
        self.pbDeleteRow.pressed.connect(self.deleteRow)

        self.pbReplaceRow = QtWidgets.QPushButton("Replace row", self.centralwidget)
        self.verticalLayout.addWidget(self.pbReplaceRow)
        self.pbReplaceRow.pressed.connect(self.replaceRow)
        self.idx = 0

        self.pbReplace1Row = QtWidgets.QPushButton("Replace 1 row up", self.centralwidget)
        self.verticalLayout.addWidget(self.pbReplace1Row)
        self.pbReplace1Row.pressed.connect(self.replace1RowUp)

        
        # Exit button
        self.pbExit = QtWidgets.QPushButton("Exit", self.centralwidget)
        self.verticalLayout.addWidget(self.pbExit)
        self.pbExit.pressed.connect(lambda: self.close())
        
        
        # Spacer
        self.spacerItem1 = QtWidgets.QSpacerItem(20, 40, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout.addItem(self.spacerItem1)

        # Statusbar
        self.statusbar = QtWidgets.QStatusBar(self)
        self.statusbar.setLayoutDirection(QtCore.Qt.RightToLeft)
        self.statusbar.setObjectName("statusbar")
        self.setStatusBar(self.statusbar)

        self.absLabel = QLabel("")
        self.blkLabel = QLabel("")
        self.statusbar.addPermanentWidget(self.absLabel, stretch=0)
        self.statusbar.addPermanentWidget(self.blkLabel, stretch=0)

        # Menubar
        self.menubar = QtWidgets.QMenuBar(self)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 855, 25))
        self.setMenuBar(self.menubar)
        
        # Menus
        self.menuFile   = QtWidgets.QMenu("File",   self.menubar)
        self.menubar.addAction(self.menuFile.menuAction())
        
        self.actionQuit = QtWidgets.QAction("Quit",  self ) 
        self.actionQuit.setStatusTip('Quit application')
        self.actionQuit.setShortcut('Ctrl+Q')
        self.actionQuit.triggered.connect(lambda: self.close())

        self.menuFile.addAction(self.actionQuit)

        self.plainTextEdit.cursorPositionChanged.connect(self.cursor_changed)

    def deleteRow(self):
        self.cursor.movePosition(QTextCursor.StartOfBlock)
        self.cursor.select(QTextCursor.LineUnderCursor)
        self.cursor.removeSelectedText()

    def replaceRow(self):
        self.cursor.movePosition(QTextCursor.StartOfLine)
        self.cursor.select(QTextCursor.LineUnderCursor)
        self.cursor.removeSelectedText()
        self.cursor.insertHtml(f"<b>Some counter {self.idx}</b>")
        self.idx += 1

    def replace1RowUp(self):
        self.cursor.movePosition(QTextCursor.End)
        self.cursor.movePosition(QTextCursor.StartOfLine)
        self.cursor.movePosition(QTextCursor.Up)
        self.cursor.movePosition(QTextCursor.Up)
        self.cursor.select(QTextCursor.LineUnderCursor)
        self.cursor.insertText(f"Some counter {self.idx}")
        self.idx += 1
        
    def moveCursor(self, pos : QTextCursor):
        #self.plainTextEdit.moveCursor(pos)
        self.cursor.movePosition(pos)
        self.cursor_changed()

    def cursor_changed(self):
        pos = self.plainTextEdit.textCursor().position()
        bpos = self.plainTextEdit.textCursor().positionInBlock()
        print(self.cursor.position())
 #       self.cursor.
        
        self.absLabel.setText(f"Absolute: {pos}")
        self.blkLabel.setText(f"Block: {bpos}")
        
        print(f"Cursor moved: abs:{pos}  block:{bpos}") 

    def insertText(self):
        self.cursor.insertText("Inserting")

    def changeText(self):
        self.plainTextEdit2.appendHtml(self.plainTextEdit.toPlainText())
        self.setOverwriteMode(True)   
        cur = QTextCursor(self.document())
        cur.movePosition(QTextCursor.End)
        
        # cur.movePosition(QTextCursor.Left)
        cur.movePosition(QTextCursor.StartOfLine)
        # cur.insertText("x")
        # cur.insertBlock("x")
        cur.insertText("XX")
        # self.insertPlainText(html)
        
        self.setOverwriteMode(False)
        self.overwrite = False
                
    def append(self, str):    
#        self.textEdit.append(str)
#        self.plainTextEdit.insertPlainText(str)

        td = self.plainTextEdit.document()
        print(td)
        tc = QTextCursor(td)
        print(tc)
#        tc.movePosition(QTextCursor.End)
#        tc.movePosition(QTextCursor.Up)
#        self.plainTextEdit.appendPlainText(str)
        self.plainTextEdit.insertPlainText(str)
#        self.plainTextEdit.appendHtml(str)
        
    def _message(self,msg):
        self.statusbar.showMessage(msg, MsgTime)
        
    # Show message in status bar
    def message(self, msg):
        self.statusbar.setStyleSheet("color: black")
        self._message(msg)
        
    # Show error message in status bar
    def messageError(self, msg):
        self.statusbar.setStyleSheet("color: red")
        self._message(msg)
                                                                             
    def pButton2(self):
        self.plainTextEdit.appendHtml("XXX")
    
    def pButton3(self):
        pass
       
        
def main():
    logging.basicConfig(level=logging.DEBUG)
           
    app = QApplication(sys.argv)
    mainForm = MainForm()
    mainForm.show()
    sys.exit(app.exec_())                   

# Absolute path to script itself        
scriptPath = os.path.abspath(os.path.dirname(sys.argv[0]))

# Main program handle 
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
                

