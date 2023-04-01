#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# asdf sfda
#
# File:    __FILE__
# Author:  
# Date:    2017-05-29
# License: 
# Python:  >=3
# QT       5
# 
# -----------------------------------------------------------------------
# This file is generated from pyplate Python template generator.
# Pyplate is developed by
# Peter Malmberg <peter.malmberg@gmail.com>
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

# Settings ------------------------------------------------------------------

# Application settings
AppName     = "__FILE__"
AppVersion  = "0.1"
AppLicense  = ""
AppAuthor   = ""
AppDesc     = "Pyplate description text"

# Qt settings
WindowTitle = AppName
WindowXSize = 320
WindowYSize = 240

# Code ----------------------------------------------------------------------


    msg.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
    msg.buttonClicked.connect(msgbtn)
    
    retval = msg.exec_()
    print("value of pressed message box button:", retval)
    

def addText(txt):
    text.append(txt)



# Absolute path to script itself        
scriptPath = os.path.abspath(os.path.dirname(sys.argv[0]))

# Uncomment to use logfile
#LogFile     = "pyplate.log"


from PyQt5.QtCore import pyqtSlot
from ui_MainWindow import Ui_MainWindow

class MainForm(QWidget):
    def __init__(self, parent=None):
        super(MainForm, self).__init__(parent)
        
        self.ui = Ui_MainWindow()
        
        self.ui.setupUi(self)

def main():
    app = QApplication(sys.argv)
    mainForm = MainForm()
    mainForm.show()
    sys.exit(app.exec_())
    return



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
                

