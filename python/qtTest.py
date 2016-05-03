#! /usr/bin/env python
# -*- coding: utf-8 -*-
#
#
#
#
#


# Imports -------------------------------------------------------------------
import sys
from PyQt4.QtGui import *
 
# Settings ------------------------------------------------------------------
AppName     = "QtTest"
AppVersion  = "0.1"
AppLicence  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmnerg@gmail.com>"
WindowTitle = "My program"
WindowXSize = 320
WindowYsize = 240


# Code ----------------------------------------------------------------------

def oFile():
    filename = QFileDialog.getOpenFileName(w, 'Open File', '/')
    print("Filename " + filename)


def main():
    # Create an PyQT4 application object.
    app = QApplication(sys.argv)       
 
    # The QWidget widget is the base class of all user interface objects in PyQt4.
    global w
    w = QMainWindow()
         
    # Set window size. 
    w.resize(320, 240)
 
    # Set window title  
    w.setWindowTitle(WindowTitle) 
 
    # Add a button
    btn = QPushButton('Exit', w)
    btn.setToolTip('Click to quit!')
    btn.clicked.connect(exit)
    btn.resize(btn.sizeHint())
    btn.move(100, 80)       

    tbtn = QPushButton('File', w)
    tbtn.clicked.connect(oFile)
    tbtn.resize(tbtn.sizeHint())
    tbtn.move(100, 110)       

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
    aboutButton.triggered.connect(w.close)
    helpMenu.addAction(aboutButton)                 
    
    # Statusbar
    w.statusBar().showMessage('Kalle')
    
    # Show window
    w.show() 
    
    sys.exit(app.exec_())

    
if __name__ == '__main__':
    main()
