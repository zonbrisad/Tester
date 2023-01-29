#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
# 
# Textedit cursor test
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
AppName     = "tect"
AppVersion  = "0.1"
AppLicense  = ""
AppAuthor   = "Peter Malmberg <peter.malmberg@gmail.com>"
AppDesc     = "Textedit cursor test"
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

aboutHtml='''
<h3>About '''+AppName+'''</h3>
<br>
<b>Version: </b> '''+AppVersion+'''
<br>
<b>Author: </b>'''+AppAuthor+'''
<br><br>
'''+AppDesc+'''
'''

class AboutDialog(QDialog):
    def __init__(self, parent = None):
        super(AboutDialog, self).__init__(parent)

        self.setWindowTitle("About " + AppName)
        self.setWindowModality(Qt.ApplicationModal)
        
        # Set dialog size. 
        self.resize(400, 300)
                                
        self.verticalLayout = QtWidgets.QVBoxLayout(self)
        self.verticalLayout.setSpacing(2)
        #horizontalLayout.addLayout(self.verticalLayout)
        
        self.mainLayout = QtWidgets.QHBoxLayout()
        self.mainLayout.setContentsMargins(2, 2, 2, 2)
        self.mainLayout.setSpacing(2)

        self.buttonLayout = QtWidgets.QHBoxLayout()
        self.buttonLayout.setContentsMargins(2, 2, 2, 2)
        self.buttonLayout.setSpacing(2)

        self.setLayout(self.verticalLayout)
                
        # TextEdit
        self.textEdit = QtWidgets.QTextEdit(self)
        self.textEdit.setReadOnly(True)
        self.verticalLayout.addWidget(self.textEdit)
        
        # Buttonbox
        self.buttonBox = QDialogButtonBox(self)
        self.buttonBox.setOrientation(QtCore.Qt.Horizontal)
        self.buttonBox.setStandardButtons( QDialogButtonBox.Ok | QDialogButtonBox.Cancel )
        self.buttonBox.accepted.connect(self.accept)
        self.buttonBox.rejected.connect(self.reject)
        self.verticalLayout.addWidget(self.buttonBox)
        
        self.textEdit.insertHtml(aboutHtml)
        
    @staticmethod
    def about(parent = None):
        dialog = AboutDialog(parent)
        result = dialog.exec_()
        return (result == QDialog.Accepted)
    
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
        #self.pbExit.pressed.connect(self.appExit)
        self.verticalLayout.addWidget(self.pbExit)
        
        self.vlText = QtWidgets.QVBoxLayout()
        self.vlText.setSpacing(2)
        self.horizontalLayout.addLayout(self.vlText)
        self.label = QtWidgets.QLabel("TextEdit", self.centralwidget)
        self.vlText.addWidget(self.label)
        
        # TextEdit
        self.textEdit = QtWidgets.QTextEdit(self.centralwidget)
        self.textEdit.setReadOnly(True)
        self.vlText.addWidget(self.textEdit)
        
        self.vlPlain = QtWidgets.QVBoxLayout()
        self.vlPlain.setSpacing(2)
        self.horizontalLayout.addLayout(self.vlPlain)
        self.label = QtWidgets.QLabel("PlainTextEdit", self.centralwidget)
        self.vlPlain.addWidget(self.label)
        
        # PlaintTextEdit
        self.plainTextEdit = QtWidgets.QPlainTextEdit(self)
        self.plainTextEdit.setReadOnly(True)
        self.vlPlain.addWidget(self.plainTextEdit)

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

        self.menuHelp   = QtWidgets.QMenu("Help",   self.menubar)
        self.menubar.addAction(self.menuHelp.menuAction())

        # Menu items
        self.actionNew   = QtWidgets.QAction("New",   self )
        self.actionNew.setStatusTip('New XXX')
        self.actionNew.setShortcut('Ctrl+N')
        self.actionNew.triggered.connect(self.msgBox)

        self.menuFile.addAction(self.actionNew)
        
        self.actionOpen  = QtWidgets.QAction("Open",  self )
        self.actionOpen.setShortcut('Ctrl+O')
        self.actionOpen.triggered.connect(self.openFile)
        self.menuFile.addAction(self.actionOpen)

        self.menuFile.addSeparator()
        
        self.actionQuit = QtWidgets.QAction("Quit",  self ) 
        self.actionQuit.setStatusTip('Quit application')
        self.actionQuit.setShortcut('Ctrl+Q')
        #self.actionQuit.triggered.connect(self.appExit)
        self.menuFile.addAction(self.actionQuit)
        
        self.actionHelp  = QtWidgets.QAction("Help",  self )
        self.menuHelp.addAction(self.actionHelp)
        
        self.menuHelp.addSeparator()
        
        self.actionAbout = QtWidgets.QAction("About", self )
        self.actionAbout.triggered.connect(self.about)
        self.menuHelp.addAction(self.actionAbout)
            

    def testText(self):
        text, ok = QInputDialog.getText(self, 'Input Dialog', 'Enter your name:')
        if (ok):
            self.append("Entered: "+text)
        else:
            self.append("Cancel")
                
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
       
    def openFile(self):
        dlg = QFileDialog()
#        dlg.setFileMode(QFileDialog.AnyFile)
        dlg.setFileMode(QFileDialog.ExistingFiles)
#        dlg.setFilter("Text files (*.txt)")
        if dlg.exec_():
              filenames = dlg.selectedFiles
              for f in filenames:
                  print(f)
                                             
    def msgBox(self):
        msg = QMessageBox()
        #msg.setIcon(QMessageBox.Information)
        msg.setText("This is a message box")
        msg.setInformativeText("This is additional information")
        msg.setWindowTitle("MessageBox demo")
        msg.setDetailedText("The details are as follows:")
        msg.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
        msg.buttonClicked.connect(self.msgBoxOk)
        
        retval = msg.exec_()
        print("value of pressed message box button:", retval)
        
    def msgBoxOk(self):
        self.message("XXX")
     
    def about(self):  
        AboutDialog.about()
        
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
                

