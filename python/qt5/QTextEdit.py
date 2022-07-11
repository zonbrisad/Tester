#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
# 
# An example of QTextEdit widget features
#
# File:    QTextEdit.py
# Author:  Peter Malmberg <peter.malmber@gmail.com>
# Date:    2017-07-05
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

import argparse
import logging
import os
import sys
import traceback

from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import QApplication, QDialog, QMainWindow, QWidget

# from datetime import datetime, date, time

# Settings ------------------------------------------------------------------

# Application settings
AppName = "QTextEdit"
AppVersion = "0.1"
AppLicense = ""
AppAuthor = "Peter Malmberg <peter.malmber@gmail.com>"
AppDesc = "An example of QTextEdit widget features"

# Qt settings
WindowTitle = AppName
WindowXSize = 800
WindowYSize = 400

# Time to show message in ms
MsgTime = 2000

# Code ----------------------------------------------------------------------

aboutHtml = '''
<h3>About '''+AppName+'''</h3>
<br>
<b>Version: </b> '''+AppVersion+'''
<br>
<b>Author: </b>'''+AppAuthor+'''
<br><br>
'''+AppDesc+'''
'''

htmlTable = '''
<table style="width:100%">
<tr>
<th>Firstname</th>
<th>Lastname</th> 
<th>Age</th>
</tr>
<tr>
<td>Jill</td>
<td>Smith</td> 
<td>50</td>
</tr>
<tr>
<td>Eve</td>
<td>Jackson</td> 
<td>94</td>
</tr>
</table>
'''

htmlBlock = '''
<div style="background-color:Silver;color:Green;padding:30px;">
<h2>London</h2>
<p>London is the capital city of England. It is the most populous city in the United Kingdom, with a metropolitan area of over$
<p>Standing on the River Thames, London has been a major settlement for two millennia, its history going back to its founding $
</div> 
'''

htmlList = '''
<ol>  
<li>Coffee</li> 
<li>Tea</li>  
<li>Milk</li>  
</ol>
'''
      
htmlStyle = '''
<h2 style="background-color:blue;color:white">
Background-color set by using blue
</h2>'''

htmlColors = '''
<br>
<h2>Standard colors</h2><br>
<font color="White">White<br>
<font color="Silver">Silver<br>
<font color="Gray">Gray<br>
<font color="Black">Black<br>
<font color="Red">Red<br>
<font color="Maroon">Maroon<br>
<font color="Yellow">Yellow<br>
<font color="Olive">Olive<br>
<font color="Lime">Lime<br>
<font color="Green">Green<br>
<font color="Aqua">Aqua<br>
<font color="Teal">Teal<br>
<font color="Blue">Blue<br>
<font color="Navy">Navy<br>
<font color="Fuchsia">Fuchsia<br>
<font color="Purple">Purple<br>
<font color="White">

<font color="Black">
<h2">Pink colors</h2><br>

<font color="Pink">Pink<br>
<font color="LightPink">LightPink<br>
<font color="HotPink">HotPink<br>
<font color="DeepPink">DeepPink<br>
<font color="PaleVioletRed">PaleVioletRed<br>
<font color="MediumVioletRed">MediumVioletRed<br>

<font color="Black">
<h2>Red colors</h2><br>

<font color="LightSalmon">LightSalmon<br>
<font color="Salmon">Salmon<br>
<font color="DarkSalmon">DarkSalmon<br>
<font color="LightCoral">LightCoral<br>
<font color="IndianRed">IndianRed<br>
<font color="Crimson">Crimson<br>
<font color="FireBrick">FireBric<br>
<font color="DarkRed">DarkRed<br>
<font color="Red">Red<br>

<font color="Black">
<h2>Orange colors</h2><br>

<font color="OrangeRed">OrangeRed<br>
<font color="Tomato">omato<br>
<font color="Coral">Coral<br>
<font color="DarkOrange">DarkOrange<br>
<font color="Orange">Orange<br>

<font color="Black">
<h2>Yellow colors</h2><br>

<font color="Yellow">Yellow<br>
<font color="LightYellow">LightYellow<br>
<font color="LemonChiffon">LemonChiffon<br>
<font color="LightGoldenrodYellow">LightGoldenrodYellow<br>
<font color="PapayaWhip">PapayaWhip<br>
<font color="Moccasin">Moccasin<br>
<font color="PeachPuff">PeachPuff<br>
<font color="PaleGoldenrod">PaleGoldenrod<br>
<font color="Khaki">Khaki<br>
<font color="DarkKhaki">DarkKhaki<br>
<font color="Gold">Gold<br>

<font color="Black">
<h2>Brown colors</h2><br>

<font color="Cornsilk">Cornsilk<br>
<font color="BlanchedAlmond">BlanchedAlmond<br>
<font color="Bisque">Bisque<br>
<font color="NavajoWhite">NavajoWhite<br>
<font color="Wheat">Wheat<br>
<font color="BurlyWood">BurlyWood<br>
<font color="Tan">Tan<br>
<font color="RosyBrown">RosyBrown<br>
<font color="SandyBrown">SandyBrown<br>
<font color="Goldenrod">Goldenrod<br>
<font color="DarkGoldenrod">DarkGoldenrod<br>
<font color="Peru">Peru<br>
<font color="Chocolate">Chocolate<br>
<font color="SaddleBrown">SaddleBrown<br>
<font color="Sienna">Sienna<br>
<font color="Brown">Brown<br>
<font color="Maroon">Maroon<br>


<font color="Black">
<h2>Green colors</h2><br>

<font color="DarkOliveGreen">DarkOliveGreen<br>
<font color="Olive">Olive<br>
<font color="OliveDrab">OliveDrab<br>
<font color="YellowGreen">YellowGreen<br>
<font color="LimeGreen">LimeGreen<br>
<font color="Lime">Lime<br>
<font color="LawnGreen">LawnGreen<br>
<font color="Chartreuse">Chartreuse<br>
<font color="GreenYellow">GreenYellow<br>
<font color="SpringGreen">SpringGreen<br>
<font color="MediumSpringGreen">MediumSpringGreen<br>
<font color="LightGreen">LightGreen<br>
<font color="PaleGreen">PaleGreen<br>
<font color="DarkSeaGreen">DarkSeaGreen<br>
<font color="MediumAquamarine">MediumAquamarine<br>
<font color="MediumSeaGreen">MediumSeaGreen<br>
<font color="SeaGreen">SeaGreen<br>
<font color="ForestGreen">ForestGreen<br>
<font color="Green">Green<br>
<font color="DarkGreen">DarkGreen<br>


<font color="Black">
<h2>Cyan colors</h2><br>

<font color="Aqua">Aqua<br>
<font color="Cyan">Cyan<br>
<font color="LightCyan">LightCyan<br>
<font color="PaleTurquoise">PaleTurquoise<br>
<font color="Aquamarine">Aquamarine<br>
<font color="Turquoise">Turquoise<br>
<font color="MediumTurquoise">MediumTurquoise<br>
<font color="DarkTurquoise">DarkTurquoise<br>
<font color="LightSeaGreen">LightSeaGreen<br>
<font color="CadetBlue">CadetBlue<br>
<font color="DarkCyan">DarkCyan<br>
<font color="Teal">Teal<br>

<font color="Black">
<h2>Blue colors</h2><br>

<font color="LightSteelBlue">LightSteelBlue<br>
<font color="PowderBlue">PowderBlue<br>
<font color="LightBlue">LightBlue<br>
<font color="SkyBlue">SkyBlue<br>
<font color="LightSkyBlue">LightSkyBlue<br>
<font color="DeepSkyBlue">DeepSkyBlue<br>
<font color="DodgerBlue">DodgerBlue<br>
<font color="CornflowerBlue">CornflowerBlue<br>
<font color="SteelBlue">SteelBlue<br>
<font color="RoyalBlue">RoyalBlue<br>
<font color="Blue">Blue<br>
<font color="MediumBlue">MediumBlue<br>
<font color="DarkBlue">DarkBlue<br>
<font color="Navy">Navy<br>
<font color="MidnightBlue">MidnightBlue<br>
'''
purpleColors = [
    'Purple, violet, and magenta colors',
    'Lavender',
    'Thistle',
    'Plum',
    'Violet',
    'Orchid',
    'Fuchsia',
    'Magenta',
    'MediumOrchid',
    'MediumPurple',
    'BlueViolet',
    'DarkViolet',
    'DarkOrchid',
    'DarkMagenta',
    'Purple',
    'Indigo',
    'DarkSlateBlue',
    'SlateBlue',
    'MediumSlateBlue'
]

whiteColors = [
    'White colors',
    'White',
    'Snow,'
    'Honeydew',
    'MintCream',
    'Azure',
    'AliceBlue',
    'GhostWhite',
    'WhiteSmoke',
    'Seashell',
    'Beige',
    'OldLace',
    'FloralWhite',
    'Ivory',
    'AntiqueWhite',
    'Linen',
    'LavenderBlush',
    'MistyRose'
]
 
grayColors = [
    'Gray and black colors',
    'Gainsboro',
    'LightGray',
    'Silver',
    'DarkGray',
    'Gray',
    'DimGray',
    'LightSlateGray',
    'SlateGray',
    'DarkSlateGray',
    'Black',
]

 
def color2html(col):
    str = ''
    for x in col:
        if str == '':
            str += '<font color="Black">\n'
            str += '<br><h2>'+x+'</h2><br>\n'
        else:
            str += '<font color="'+x+'">'+x+'<br>\n'

    return str

  
htmlFonts = '''\
<br>
<font color="Black">
Normal<br>
<b>Bold</b><br>
<i>Italic</i><br>
<code>Code</code><br>
<h1>Heading 1</h1>
<h2 color="Red">Heading 2</h2>
<h3 bgcolor="Maroon">Heading 3</h3>
<h4><font bgcolor="Tan">Heading 4</h4>
<hr>
<a href="www.svd.se">Svenska Dagbladet</a>
'''

htmlCss = '''\
h1 {
color: white;
}
h2 {
color: red;
}
h3 {
color: green;
}
h4 {
color: blue;
}
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
        # horizontalLayout.addLayout(self.verticalLayout)

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

#        self.resize(self.sizeHint())

        # Create central widget
        self.centralwidget = QtWidgets.QWidget(self)
        self.setCentralWidget(self.centralwidget)

        self.horizontalLayout = QtWidgets.QHBoxLayout(self.centralwidget)
        self.horizontalLayout.setContentsMargins(2, 2, 2, 2)
        self.horizontalLayout.setSpacing(2)

        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setSpacing(2)
        self.horizontalLayout.addLayout(self.verticalLayout)

        # Exit button
        self.pbExit = QtWidgets.QPushButton("Exit", self.centralwidget)
        self.pbExit.pressed.connect(self.appExit)
        self.verticalLayout.addWidget(self.pbExit)

        # Button html colors
        self.pb1 = QtWidgets.QPushButton("HTML colors", self.centralwidget)
        self.pb1.pressed.connect(self.htmlColors)
        self.verticalLayout.addWidget(self.pb1)

        # Button html font
        self.pb2 = QtWidgets.QPushButton("HTML fonts", self.centralwidget)
        self.pb2.pressed.connect(self.htmlFonts)
        self.verticalLayout.addWidget(self.pb2)

        # Button html table
        self.pb3 = QtWidgets.QPushButton("HTML table", self.centralwidget)
        self.pb3.pressed.connect(self.htmlTable)
        self.verticalLayout.addWidget(self.pb3)

        # Button html block
        self.pb4 = QtWidgets.QPushButton("HTML block", self.centralwidget)
        self.pb4.pressed.connect(self.htmlBlock)
        self.verticalLayout.addWidget(self.pb4)
         
        # Button html list
        self.pb5 = QtWidgets.QPushButton("HTML list", self.centralwidget)
        self.pb5.pressed.connect(self.htmlList)
        self.verticalLayout.addWidget(self.pb5)
         
        # Spacer
        self.spacerItem1 = QtWidgets.QSpacerItem(
            20, 40,
            QtWidgets.QSizePolicy.Minimum,
            QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout.addItem(self.spacerItem1)
         
        # TextEdit
        self.textEdit = QtWidgets.QTextEdit(self.centralwidget)
        self.horizontalLayout.addWidget(self.textEdit)
        
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
        self.menuFile = QtWidgets.QMenu("File", self.menubar)
        self.menubar.addAction(self.menuFile.menuAction())

        self.menuHelp = QtWidgets.QMenu("Help",   self.menubar)
        self.menubar.addAction(self.menuHelp.menuAction())

        self.actionQuit = QtWidgets.QAction("Quit", self)
        self.actionQuit.setStatusTip('Quit application')
        self.actionQuit.setShortcut('Ctrl+Q')
        self.actionQuit.triggered.connect(self.appExit)
        self.menuFile.addAction(self.actionQuit)

        self.actionAbout = QtWidgets.QAction("About", self)
        self.actionAbout.triggered.connect(self.about)
        self.menuHelp.addAction(self.actionAbout)

    def scrollDown(self):
        vsb = self.textEdit.verticalScrollBar()
        vsb.setValue(vsb.maximum())

    def addHtml(self, text):
        self.textEdit.insertHtml(text)
        self.scrollDown()

    def htmlColors(self):
        self.addHtml(htmlColors)
        self.addHtml(color2html(purpleColors))
        self.addHtml(color2html(grayColors))
        self.addHtml(color2html(whiteColors))
        
    def htmlFonts(self):    
        self.addHtml(htmlFonts) 

    def htmlTable(self):    
        self.addHtml(htmlTable)

    def htmlBlock(self):    
        self.addHtml(htmlBlock)
        
    def htmlList(self):    
        self.addHtml(htmlList)
        
    def append(self, str):    
        self.addHtml(str)
        
    def message(self, msg):    
        self.statusbar.showMessage(msg, MsgTime) 
            
    def appExit(self): 
        self.close()  
     
    def msgBox(self):
        msg = QMessageBox()
        # msg.setIcon(QMessageBox.Information)
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
    parser = argparse.ArgumentParser(prog=AppName, add_help=True, description=AppDesc)
    parser.add_argument('--version', action='version', version='%(prog)s '+AppVersion)
    parser.add_argument("--info",  action="store_true", help="Information about script")

    args = parser.parse_args()

    if args.info:
        printInfo()
        return
        
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
