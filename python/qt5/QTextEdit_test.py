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

from PyQt5 import QtCore, QtGui, QtWidgets

# Settings ------------------------------------------------------------------

# Application settings
AppName     = "QTextEdit2"
AppVersion  = "0.1"
AppLicense  = ""
AppAuthor   = "Peter Malmberg <peter.malmberg@gmail.com>"
AppDesc     = "QTextEdit test"
AppDomain   = "Domain"
AppOrg      = "Organisation"
 
# Qt settings
WindowTitle = AppName
WindowXSize = 1000
WindowYSize = 400

QCoreApplication.setOrganizationName(AppOrg)
QCoreApplication.setOrganizationDomain(AppDomain)
QCoreApplication.setApplicationName(AppName)

# Time to show message in ms
MsgTime     = 2000

# Code ----------------------------------------------------------------------


    
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
        
        # Button 1
        self.pb1 = QtWidgets.QPushButton("Append", self.centralwidget)
        #self.pb1.pressed.connect(self.pButton)
        self.verticalLayout.addWidget(self.pb1)

        self.pb2 = QtWidgets.QPushButton("Move cursor", self.centralwidget)
        self.pb2.pressed.connect(self.pButton2)
        self.verticalLayout.addWidget(self.pb2)

        self.pb3 = QtWidgets.QPushButton("Move cursor", self.centralwidget)
        self.pb3.pressed.connect(self.pButton3)
        self.verticalLayout.addWidget(self.pb3)

        # Exit button
        self.pbExit = QtWidgets.QPushButton("Exit", self.centralwidget)
        self.pbExit.pressed.connect(lambda: self.close())
        self.verticalLayout.addWidget(self.pbExit)
        
        self.vlPlain = QtWidgets.QVBoxLayout()
        self.vlPlain.setSpacing(2)
        self.horizontalLayout.addLayout(self.vlPlain)
        self.label = QtWidgets.QLabel("PlainTextEdit", self.centralwidget)
        self.vlPlain.addWidget(self.label)
        
        # PlaintTextEdit
        self.plainTextEdit = QtWidgets.QPlainTextEdit(self)
        self.plainTextEdit.setReadOnly(False)
        self.vlPlain.addWidget(self.plainTextEdit)
        # self.plainTextEdit.textChanged.connect(lambda: print("Kalle"))
        self.plainTextEdit.textChanged.connect(self.changeText)
        
        self.vlText = QtWidgets.QVBoxLayout()
        self.vlText.setSpacing(2)
        self.horizontalLayout.addLayout(self.vlText)
        self.label = QtWidgets.QLabel("TextEdit", self.centralwidget)
        self.vlText.addWidget(self.label)
        
        # TextEdit
        self.textEdit = QtWidgets.QTextEdit(self.centralwidget)
        self.textEdit.setReadOnly(True)
        self.vlText.addWidget(self.textEdit)
        

        # Spacer
        self.spacerItem1 = QtWidgets.QSpacerItem(20, 40, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout.addItem(self.spacerItem1)

        # Statusbar
        self.statusbar = QtWidgets.QStatusBar(self)
        self.statusbar.setLayoutDirection(QtCore.Qt.RightToLeft)
        self.statusbar.setObjectName("statusbar")
        self.setStatusBar(self.statusbar)

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
        


    def changeText(self):
        self.textEdit.setHtml(self.plainTextEdit.toPlainText())

                
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
                

