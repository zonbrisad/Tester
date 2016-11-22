#!/usr/bin/env python
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
#  Description: A simple PyQt Testprogram    
#    
#
# File:    qtTest.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:    2016-02-19
# Version: 0.2
# Python:  >=3
# Licence: MIT
# 
# -----------------------------------------------------------------------
#

# Imports -------------------------------------------------------------------

import sys, os, traceback
import logging
#import argparse
from PyQt4.QtGui import *
from PyQt4.QtCore import *


# Settings ------------------------------------------------------------------

# Application settings
AppName     = "PyQtTest"
AppVersion  = "0.1"
AppLicence  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmnerg@gmail.com>"

# Qt settings
WindowTitle = AppName
WindowXSize = 320
WindowYSize = 240

# Code ----------------------------------------------------------------------

def oFile():
    filename = QFileDialog.getOpenFileName(w, 'Open File', '/')
    print("Filename " + filename)

def aboutDialog():
    d = QDialog()
    b1 = QPushButton("ok",d)
    b1.move(100,50)
    d.setWindowTitle("About " + AppName)
    d.setWindowModality(Qt.ApplicationModal)
    l = QLabel(AppName, d)
    l.move(20,10)
    l = QLabel("Version: "+AppVersion, d)
    l.move(20,30)
    l = QLabel("Licence: "+AppLicence, d)
    l.move(20,50)
    d.exec_()

def msgbtn(i):
    print("Button pressed is:",i.text())
    
def msgBox():
    msg = QMessageBox()
    #msg.setIcon(QMessageBox.Information)
    msg.setText("This is a message box")
    msg.setInformativeText("This is additional information")
    msg.setWindowTitle("MessageBox demo")
    msg.setDetailedText("The details are as follows:")
    msg.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
    msg.buttonClicked.connect(msgbtn)
    
    retval = msg.exec_()
    print("value of pressed message box button:", retval)
    

def addText(txt):
    text.append(txt)

def timerEvent():
    addText("Timer event")
    
def main():
    # Create an PyQT4 application object.
    app = QApplication(sys.argv)       

    # The QWidget widget is the base class of all user interface objects in PyQt4.
    global w
    w = QMainWindow()

    # Set window size. 
    w.resize(WindowXSize, WindowYSize)
 
    # Set window title  
    w.setWindowTitle(WindowTitle) 
 
    # Add a exit button
    btn = QPushButton('Exit')
    btn.setToolTip('Click to quit!')
    btn.clicked.connect(exit)

    # Add open file button
    tbtn = QPushButton('File')
    tbtn.clicked.connect(oFile)

    # Create main menu
    mainMenu = w.menuBar()
    mainMenu.setNativeMenuBar(False)
    fileMenu = mainMenu.addMenu('File')
    helpMenu = mainMenu.addMenu('Help')
    
    # Add exit button
    exitButton = QAction( 'Exit', w)
    exitButton.setShortcut('Ctrl+Q')
    exitButton.setStatusTip('Exit application')
    exitButton.triggered.connect(w.close)
    fileMenu.addAction(exitButton)
    
    # Add about button
    aboutButton = QAction( 'About', w)
    aboutButton.setStatusTip('About application')
#    aboutButton.triggered.connect(aboutDialog)
    aboutButton.triggered.connect(msgBox)
    #helpMenu.addAction(aboutButton)                 
    
    # Statusbar
    w.statusBar().showMessage('Kalle')

    pixmap = QPixmap("flower.jpg")
#    pixmap.scaled(100,100, Qt::IgnoreAspectRatio )
        
    label = QLabel()
    label.setPixmap(pixmap)
    
    # Add text edit field
    global text
    text = QTextEdit()
    addText("Testing")
    
    # Create Vertical box layout
    vbox = QVBoxLayout()    
    
    vbox.addWidget(tbtn)
    vbox.addStretch()    
    vbox.addWidget(btn)
    vbox.addWidget(label)
    vbox.addWidget(text)

    # Create a central widget for main window
    cw = QWidget()
    cw.setLayout(vbox)
    
    w.setCentralWidget(cw)

    # Create a timer object
    timer = QTimer()
    timer.setInterval(1000)
    timer.timeout.connect(timerEvent)
    timer.start()
    
    # Show window
    w.show() 
    
    sys.exit(app.exec_())

    
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
                
    
    
