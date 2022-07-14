#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# test of how to receive linux signals.
#
# File:     test_signal.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2022-07-13
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------


import argparse
import traceback
import os
import sys
import signal
from PyQt5.QtWidgets import QApplication, QMainWindow, QMenu, QMenuBar,\
                            QAction, QStatusBar, QDialog, QVBoxLayout,\
                            QHBoxLayout, QTextEdit, QDialogButtonBox,\
                            QPushButton, QMessageBox, QWidget
from PyQt5.QtCore import Qt, QTimer

# Variables ------------------------------------------------------------------


app_name = "test_signal.py"
app_version = "0.01"
app_license = ""
app_author = "Peter Malmberg  <peter.malmberg@gmail.com>"
app_org = "__ORGANISATION__"
app_description = "Test of how to receive linux signals."

# Qt main window settings
win_title = app_name
win_x_size = 320
win_y_size = 240

# Code -----------------------------------------------------------------------


about_html=f"""
<center><h2>{app_name}</h2></center>
<br>
<b>Version: </b>{app_version}
<br>
<b>Author: </b>{app_author}
<br>
<hr>
<br>
{app_description}
<br>
"""


class AboutDialog(QDialog):
    def __init__(self, parent = None):
        super(AboutDialog, self).__init__(parent)

        self.setWindowTitle(app_name)
        self.setWindowModality(Qt.ApplicationModal)
        self.resize(400, 300)

        self.verticalLayout = QVBoxLayout(self)
        self.verticalLayout.setSpacing(2)
        self.setLayout(self.verticalLayout)

        # TextEdit
        self.textEdit = QTextEdit(self)
        self.textEdit.setReadOnly(True)
        self.verticalLayout.addWidget(self.textEdit)
        self.textEdit.insertHtml(about_html)

        # Buttonbox
        self.buttonBox = QDialogButtonBox(self)
        self.buttonBox.setStandardButtons( QDialogButtonBox.Ok )
        self.buttonBox.accepted.connect(self.accept)
        self.buttonBox.setCenterButtons(True)
        self.verticalLayout.addWidget(self.buttonBox)

    @staticmethod
    def about(parent = None):
        dialog = AboutDialog(parent)
        result = dialog.exec_()
        return (result == QDialog.Accepted)


class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)

        self.resize(win_y_size, win_y_size)
        self.setWindowTitle(win_title)

        # Create central widget
        self.centralwidget = QWidget(self)
        self.setCentralWidget(self.centralwidget)    
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setSpacing(2)

        # TextEdit
        self.textEdit = QTextEdit(self.centralwidget)
        self.verticalLayout.addWidget(self.textEdit)

        # Menubar
        self.menubar = QMenuBar(self)
        self.setMenuBar(self.menubar)

        # Menus
        self.menuFile = QMenu("File", self.menubar)
        self.menubar.addAction(self.menuFile.menuAction())

        self.menuHelp = QMenu("Help", self.menubar)
        self.menubar.addAction(self.menuHelp.menuAction())

        self.actionQuit = QAction("Quit", self)
        self.actionQuit.setStatusTip("Quit application")
        self.actionQuit.setShortcut("Ctrl+Q")
        self.actionQuit.triggered.connect(self.exit)
        self.menuFile.addAction(self.actionQuit)

        self.actionAbout = QAction("About", self)
        self.actionAbout.triggered.connect(self.about)
        self.menuHelp.addAction(self.actionAbout)

        # Statusbar
        self.statusbar = QStatusBar(self)
        self.statusbar.setLayoutDirection(Qt.LeftToRight)
        self.statusbar.setObjectName("statusbar")
        self.setStatusBar(self.statusbar)


        self.buttonSig = QPushButton("Send signal")
        self.buttonSig.clicked.connect(self.sendSignal)
        self.verticalLayout.addWidget(self.buttonSig)
        
        # Configure signal handler
        signal.signal(signal.SIGUSR1, self.signal_usr1)

        # Setup of signal polling timer
        #
        # This is required in order to allow the Qt eventloop to yield and
        # handle signal reception 
        self.timer = QTimer()
        self.timer.start(200)
        self.timer.timeout.connect(self.signal_timer)
        

    def exit(self):
        msgBox = QMessageBox()
        msgBox.setIcon(QMessageBox.Information)
        msgBox.setWindowTitle("Quit")
        msgBox.setText("Are you sure you want to quit?")
        msgBox.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel )
        if msgBox.exec() == QMessageBox.Ok:
            self.close()

    def about(self):
        AboutDialog.about()

    def signal_timer(self):
        pass

    def sendSignal(self):
        send_signal()
        

    def signal_usr1(self, signum, frame):
        self.textEdit.append("Signal USR1 received")
        

def send_signal():
    with os.popen("ps aux | grep test_signal.py | grep -v -e 'grep' -e '--signal'") as f:
        res = f.readlines()

    pid = int(res[0].split()[1]) 
    os.kill(pid, 10)
        
    
def main() -> None:

    parser = argparse.ArgumentParser(
        prog=app_name,
        description=app_description,
        epilog="",
        add_help=True)
    parser.add_argument("--debug", action="store_true", default=False,
                        help="Print debug messages")
    parser.add_argument("--version", action="version",
                        version=f"{app_name} {app_version}",
                        help="Print version information")
    parser.add_argument("--signal", action="store_true", default=False,
                        help="Send usr1 signal to process")
    args = parser.parse_args()

    if args.signal:
        send_signal()
        exit()
    
    app = QApplication(sys.argv)
    
    main_window = MainWindow()
    main_window.show()    
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
