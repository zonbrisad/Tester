#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
# 
# __DESC__
#
# File:    __NAME__.py
# Author:  __AUTHOR__
# Date:    __DATE__
# License: __LICENSE__
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
AppName     = "__NAME__"
AppVersion  = "0.1"
AppLicense  = "__LICENSE__"
AppAuthor   = "__AUTHOR__"
AppDesc     = "__DESC__"
AppDomain   = "Domain"
AppOrg      = "__ORG__"

# Qt settings
WindowTitle = AppName
WindowXSize = 500
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
    

#    pixmap = QPixmap("flower.jpg")
#    pixmap.scaled(100,100, Qt::IgnoreAspectRatio )
        
 #   label = QLabel()
 #   label.setPixmap(pixmap)
    
#    timer = QTimer()
#    timer.setInterval(1000)
#    timer.timeout.connect(timerEvent)
#    timer.start()
    
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
        self.pb1 = QtWidgets.QPushButton("Button 1", self.centralwidget)
        self.pb1.pressed.connect(self.pButton)
        self.verticalLayout.addWidget(self.pb1)

        # Exit button
        self.pbExit = QtWidgets.QPushButton("Exit", self.centralwidget)
        self.pbExit.pressed.connect(self.appExit)
        self.verticalLayout.addWidget(self.pbExit)

        # TextEdit
        self.textEdit = QtWidgets.QTextEdit(self.centralwidget)
        self.horizontalLayout.addWidget(self.textEdit)
        
        # Checkbox
        self.checkBox = QtWidgets.QCheckBox("Checkbox", self.centralwidget)
        self.checkBox.setObjectName("checkBox")        
        self.checkBox.stateChanged.connect(self.cboxChanged)        
        self.verticalLayout.addWidget(self.checkBox)
        
        # Combobox
        self.comboBox = QtWidgets.QComboBox(self.centralwidget)
        self.comboBox.activated.connect(self.comboBoxChanged)
        self.comboBox.addItem('Alt 1', 1  )
        self.comboBox.addItem('Alt 2', 2  )
        self.comboBox.addItem('Alt 3', 3  )
        self.comboBox.addItem('Alt 4', 4  )
        self.comboBox.addItem('Alt 5', 5  )        
        self.verticalLayout.addWidget(self.comboBox)
        
        # Spinbox
        self.spinBox = QtWidgets.QSpinBox(self.centralwidget)
        self.verticalLayout.addWidget(self.spinBox)

        # Double spinbox
        self.doubleSpinBox = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.verticalLayout.addWidget(self.doubleSpinBox)
        self.timeEdit = QtWidgets.QTimeEdit(self.centralwidget)
        self.verticalLayout.addWidget(self.timeEdit)
        
        # Slider
        self.horizontalSlider = QtWidgets.QSlider(self.centralwidget)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Preferred, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.horizontalSlider.sizePolicy().hasHeightForWidth())
        self.horizontalSlider.setSizePolicy(sizePolicy)
        self.horizontalSlider.setOrientation(QtCore.Qt.Horizontal)
        self.horizontalSlider.valueChanged.connect(self.valChanged)
        self.verticalLayout.addWidget(self.horizontalSlider)
        
        # Label
        self.label = QtWidgets.QLabel("Label", self.centralwidget)
        self.verticalLayout.addWidget(self.label)
        
        # Radiobuttons
        self.radioButton1 = QtWidgets.QRadioButton("Option 1", self.centralwidget)
        self.radioButton2 = QtWidgets.QRadioButton("Option 2", self.centralwidget)        
        self.radioButton3 = QtWidgets.QRadioButton("Option 3", self.centralwidget)
        self.verticalLayout.addWidget(self.radioButton1)
        self.verticalLayout.addWidget(self.radioButton2)
        self.verticalLayout.addWidget(self.radioButton3)

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

        self.menuTests   = QtWidgets.QMenu("Tests",   self.menubar)
        self.menubar.addAction(self.menuTests.menuAction())

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
        self.actionQuit.triggered.connect(self.appExit)
        self.menuFile.addAction(self.actionQuit)
        
        self.actionHelp  = QtWidgets.QAction("Help",  self )
        self.menuHelp.addAction(self.actionHelp)
        
        self.menuHelp.addSeparator()
        
        self.actionAbout = QtWidgets.QAction("About", self )
        self.actionAbout.triggered.connect(self.about)
        self.menuHelp.addAction(self.actionAbout)
        
        
        # test items
        self.actionTestText = QtWidgets.QAction("Input text", self)
        self.actionTestText.triggered.connect(self.testText)
        self.menuTests.addAction(self.actionTestText)
        
        self.actionTestInt = QtWidgets.QAction("Input integer", self)
        self.actionTestInt.triggered.connect(self.testInt)
        self.menuTests.addAction(self.actionTestInt)

        self.actionTestItems = QtWidgets.QAction("Input items", self)
        self.actionTestItems.triggered.connect(self.testItems)
        self.menuTests.addAction(self.actionTestItems)
        
        

    def testText(self):
        text, ok = QInputDialog.getText(self, 'Input Dialog', 'Enter your name:')
        if (ok):
            self.append("Entered: "+text)
        else:
            self.append("Cancel")
            
    def testInt(self):
        int, ok = QInputDialog.getInt(self, 'Input Dialog', 'Enter number', 42, 0, 100, 2)
        self.append("Integer: "+str(int))
        
    def testItems(self):
        items = []
        items.append('Item 1')
        items.append('Item 2')
        items.append('Item 3')
        items.append('Item 4')
        item, ok = QInputDialog.getItem(self, 'Input Dialog', 'Select item', items)
        self.append("Item: "+item)
                        
        
    def append(self, str):    
        self.textEdit.append(str)
        
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
                                                                             
    # Exit application
    def appExit(self):
        self.close()
    
    def pButton(self):
        self.append("Button")
        self.message("Button")
        
    def cboxChanged(self):
        self.append( "checkbox changed" )
        
    def comboBoxChanged(self):
        self.append("Selected: " + self.comboBox.itemText(self.comboBox.currentIndex()) )
        
    def valChanged(self):
        self.append("Slider" + str(self.horizontalSlider.value()))
        
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

    # options parsing
    parser = argparse.ArgumentParser(prog=AppName, add_help = True, description=AppDesc)
    parser.add_argument('--version', action='version', version='%(prog)s '+AppVersion)
    parser.add_argument("--info",  action="store_true", help="Information about script")

    # Some examples of parameters (rename or remove unwanted parameters)
    parser.add_argument("-a",    action="store_true",       help="Boolean type argument")
    parser.add_argument("-b",    action="store",  type=str, help="String type argument",  default="HejHopp")
    parser.add_argument("-c",    action="store",  type=int, help="Integer type argument", default=42)
    parser.add_argument("-d",    action="append", type=int, help="Append values to list", dest='dlist', default=[] )
    
    args = parser.parse_args()

    if args.info:
        printInfo()
        return
    
#    if args.a:
#        print("Boolean argument")
        
#    if args.b:
#        print("String argument = " + args.b)
            
#    if args.c:
#        print("Integer argument = " + str(args.c) )

#    if args.dlist:
#        print("List = ", args.dlist )
        
        
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
                

