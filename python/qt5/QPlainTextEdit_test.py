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
AppName     = "QPlainTextEdit test program"
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
<h2>Tags</h2>

Normal text<br>
<b>Bold text</b><br>
<i>Italic text</i><br>
<u>Underline text</u><br>
<s>Strike through</s><br>
Super text <sup>Supertext</sup><br>
Sub text <sub>Subtext</sub><br>

<hr>
<h2>Text color</h2>
<div style="color:Blue">
Blue
</div>
<div style="background-color:Blue;color:White">
White on blue
</div>

<hr>
<h2>Text Alignment</h2>
<h4 align="left">Left alignment</h4>
<h4 align="center">Center alignment</h4>
<h4 align="right">Right alignment</h4>
<hr>

<h2>CSS decorators</h2>

<h3>Text decoration</h3>
<div style="text-decoration:underline">Underline text</div>
<div style="text-decoration:overline">Overline text</div>
<div style="text-decoration:line-through">Cross-through text</div>

<div style="font-style:normal">Normal text</div>
<div style="font-style:italic">Italic text</div>
<div style="font-style:oblique">Oblique text</div>

<div style="font-size:small">Fontsize small</div>
<div style="font-size:medium">Fontsize medium</div>
<div style="font-size:large">Fontsize large</div>
<div style="font-size:x-large">Fontsize x-large</div>
<div style="font-size:xx-large">Fontsize xx-large</div>

<h2>Lists</h2>

<ol>
<li>Item 1</li>
<li>Item 2</li>
</ol>

<ul>
<li>Item 1</li>
<li>Item 2</li>
</ul>

<h2>HTML &lt;pre&gt; tag</h2>
<pre>
Line 1
Line 2 \n\\n
Line 3
Line 4 \r\\r
Line 5
Line 6 \n\\n
Line 7 \r\n\\r\\n
Line 8 \n\r\\n\\r
Line 9

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
        
        # Button 1
        self.pb1 = QtWidgets.QPushButton("Move right", self.centralwidget)
        self.verticalLayout.addWidget(self.pb1)
        self.pb1.pressed.connect(self.move_right)

        self.pb2 = QtWidgets.QPushButton("Move left", self.centralwidget)
        self.verticalLayout.addWidget(self.pb2)
        self.pb2.pressed.connect(self.move_left)

        self.pb3 = QtWidgets.QPushButton("Move up", self.centralwidget)
        self.verticalLayout.addWidget(self.pb3)
        self.pb3.pressed.connect(self.move_up)

        self.pb4 = QtWidgets.QPushButton("Move down", self.centralwidget)
        self.verticalLayout.addWidget(self.pb4)
        self.pb4.pressed.connect(self.move_down)

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
        self.plainTextEdit.textChanged.connect(self.changeText)
        
        self.vlText = QtWidgets.QVBoxLayout()
        self.vlText.setSpacing(2)
        self.horizontalLayout.addLayout(self.vlText)
        self.label = QtWidgets.QLabel("PlainTextEdit 2", self.centralwidget)
        self.vlText.addWidget(self.label)
        
        # TextEdit
        self.plainTextEdit2 = QtWidgets.QPlainTextEdit(self.centralwidget)
        self.plainTextEdit2.setReadOnly(True)
        self.vlText.addWidget(self.plainTextEdit2)

        self.plainTextEdit.setPlainText(temp)
        self.changeText()

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

        self.plainTextEdit.cursorPositionChanged.connect(self.cursor_changed)


    def move_right(self):
        self.plainTextEdit.moveCursor(QTextCursor.Right)
        self.cursor_changed()

    def move_left(self):
        self.plainTextEdit.moveCursor(QTextCursor.Left)
        self.cursor_changed()

    def move_up(self):
        self.plainTextEdit.moveCursor(QTextCursor.Up)
        self.cursor_changed()

    def move_down(self):
        self.plainTextEdit.moveCursor(QTextCursor.Down)
        self.cursor_changed()

    def cursor_changed(self):
        pos = self.plainTextEdit.textCursor().position()
        bpos = self.plainTextEdit.textCursor().positionInBlock()
        print(f"Cursor moved: abs:{pos}  block:{bpos}") 

    def changeText(self):
        self.plainTextEdit2.appendHtml(self.plainTextEdit.toPlainText())
                
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
                

