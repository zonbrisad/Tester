#! /usr/bin/env python
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
#  Description: A simple PyQt Testprogram    
#    
#  Author:  Peter Malmberg <peter.malmberg@gmail.com>
#  Licence: MIT
#
#
#----------------------------------------------------------------------------

# Imports -------------------------------------------------------------------
import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *

# Settings ------------------------------------------------------------------

AppName     = "PyQtTest"
AppVersion  = "0.1"
AppLicence  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmnerg@gmail.com>"
WindowTitle = AppName
WindowXSize = 320
WindowYsize = 240


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
    print "Button pressed is:",i.text()
    
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
    print "value of pressed message box button:", retval
    
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
    
    #l = QLabel("Etikett")
    
    text = QTextEdit()
    #text.append("Kalle")
    
    # Create Vertical box layout
    vbox = QVBoxLayout()    
    
    vbox.addWidget(tbtn)
    vbox.addStretch()    
    vbox.addWidget(btn)
    #vbox.addWidget(l)
    vbox.addWidget(text)

    # Create a central widget for main window
    cw = QWidget()
    cw.setLayout(vbox)
    
    w.setCentralWidget(cw)
    
    # Show window
    w.show() 
    
    sys.exit(app.exec_())

    
if __name__ == '__main__':
    main()
