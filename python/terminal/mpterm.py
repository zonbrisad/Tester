#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
#
# asdf sfda
#
# File:    mpterm.py
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
#
# -----------------------------------------------------------------------
# pyuic5 mpTerminal.ui -o ui_MainWindow.py
#

# Imports --------------------------------------------------------------------

from re import ASCII
import sys
import os
import subprocess
import traceback
import logging
import argparse
import signal
import enum
from datetime import datetime, date, time

from PyQt5.QtCore import Qt, QTimer, QSettings, QIODevice
from PyQt5.QtGui import QTextCursor, QIcon, QFont, QKeyEvent
from PyQt5.QtWidgets import (
    QApplication,
    QMainWindow,
    QMenu,
    QMenuBar,
    QAction,
    QStatusBar,
    QDialog,
    QVBoxLayout,
    QHBoxLayout,
    QTextEdit,
    QDialogButtonBox,
    QPushButton,
    QMessageBox,
    QWidget,
    QLabel,
    QFileDialog,
)

from PyQt5.QtSerialPort import QSerialPort, QSerialPortInfo
from ui_MainWindow import Ui_MainWindow

from escape import Esc, Escape, EscapeDecoder, Ascii, e2h, hex2str, TerminalState

# Settings ------------------------------------------------------------------

# Absolute path to script itself
self_dir = os.path.abspath(os.path.dirname(sys.argv[0]))

app_name = "mpterm"
app_version = "0.2"
app_description = "MpTerm is a simple serial terminal program"
app_license = ""
app_author = "Peter Malmberg"
app_email = "peter.malmberg@gmail.com"
app_org = ""
app_home = "github.com/zonbrisad/mpterm"
app_icon = f"{self_dir}/mp_icon2.png"
#app_icon = f"{self_dir}/mp_icon2.svg"

class App:
    NAME = "mpterm"
    VERSION = "0.2"
    DESCRIPTION = "MpTerm is a simple serial terminal program"
    LICENSE = ""
    AUTHOR = "Peter Malmberg"
    EMAIL = "peter.malmberg@gmail.com"
    ORG = ""
    HOME = "github.com/zonbrisad/mpterm"
    ICON = f"{self_dir}/mp_icon.png"
    

# Definitions ---------------------------------------------------------------

chars = {  0x00:"NULL",
           0x01:"SOH",
           0x02:"STX",
           0x03:"ETX",
           0x04:"EOT",
           0x05:"ENQ",
           0x06:"ACK",
           0x07:"BEL",
           0x08:"BS",
           0x09:"TAB",
           0x0A:"LF",
           0x0B:"VT",
           0x0C:"FF",
           0x0D:"CR",
           0x0E:"SO",
           0x0F:"SI",
           0x10:"DLE",
           0x11:"DC1",
           0x12:"DC2",
           0x13:"DC3",
           0x14:"DC4",
           0x15:"NAK",
           0x16:"SYN",
           0x17:"ETB",
           0x18:"CAN",
           0x19:"EM",
           0x1A:"SUB",
           0x1B:"ESC",
           0x1C:"FS",
           0x1D:"GS",
           0x1E:"RS",
           0x1F:"US"
}

keys = { Qt.Key_Enter:("\n", "Enter"), 
         Qt.Key_Return:("\n", "Return"), 
         Qt.Key_Escape:("", "Escape"), 
         Qt.Key_Delete:("", "Delete"), 
         Qt.Key_Left:("", "Left"),
         Qt.Key_Right:("", "Right"),
         Qt.Key_Up:("", "Up"),
         Qt.Key_Down:("", "Down"),
         Qt.Key_Insert:("", "Insert"),
         Qt.Key_Backspace:("", "Backspace"),
         Qt.Key_Home:("", "Home"),
         Qt.Key_End:("", "End"),
         Qt.Key_PageDown:("", "Page down"),
         Qt.Key_PageUp:("", "Page up"),
         Qt.Key_F1:("\x09", "F1"),
         Qt.Key_F2:("", "F2"),
         Qt.Key_F3:("", "F3"),
         Qt.Key_F4:("", "F4"),
         Qt.Key_F5:("", "F5"),
         Qt.Key_F6:("", "F6"),
         Qt.Key_F7:("", "F7"),
         Qt.Key_F8:("", "F8"),
         Qt.Key_F9:("", "F9"),
         Qt.Key_F10:("", "F10"),
         Qt.Key_F11:("", "F11"),
         Qt.Key_F12:("", "F12"),
         Qt.Key_Control:("", "Control"),
         Qt.Key_Shift:("", "Shift"),
         Qt.Key_Alt:("", "Alt"),
         Qt.Key_AltGr:("", "Alt Gr"),
         Qt.Key_Space:(" ", "Space"),
         Qt.Key_Print:("", "Print"),
         Qt.Key_ScrollLock:("", "Scroll lock"),
         Qt.Key_CapsLock:("", "Caps lock"),
         Qt.Key_Pause:("", "Pause"),
         Qt.Key_Tab:(Ascii.TAB, "Tab")
} 


def get_description(key: QKeyEvent) -> str:
    for a,b in keys.items():
        if key.key() == a:
            return b[1]

    return key.text()


def get_key(key: QKeyEvent) -> str:
    for a,b in keys.items():
        if key.key() == a:
            return b[0]

    return key.text()


def get_char(c: QKeyEvent) -> str:
    for a, b in chars.items():
        if  c.key() == a:
            return b
    return c.text()


errors = {
    QSerialPort.NoError:"No error",
    QSerialPort.DeviceNotFoundError:"Device not found",
    QSerialPort.PermissionError:"Permission denied",
    QSerialPort.OpenError:"Failed to open device",
    QSerialPort.NotOpenError:"Port not open",
    QSerialPort.WriteError:"Write fail",
    QSerialPort.ReadError:"Read fail",
    QSerialPort.ResourceError:"Resource error",
    QSerialPort.UnsupportedOperationError:"Unsupported operation",
    QSerialPort.TimeoutError:"Timeout",
    QSerialPort.UnknownError:"Unknown",  
}


class State(enum.Enum):
    DISCONNECTED = 0
    CONNECTED = 1
    SUSPENDED = 2
    RECONNECTING = 3


class MpTerm:
    # Display modes
    Ascii = 0
    Hex = 1
    AsciiHex = 2

    # Newline modes
    Nl = 0
    Cr = 1
    NlCr = 2

    # Black = '<font color="Black">'
    # Red = '<font color="DarkRed">'
    # Green = '<font color="Green">'
    # Yellow = '<font color="Yellow">'
    # Blue = '<font color="Blue">'
    # Magenta = '<font color="Purple">'
    # Cyan = '<font color="Teal">'
    # Gray = '<font color="Gray">'
    # Darkgray = '<font color="Black">'
    # Br_Red = '<font color="Red">'
    # Br_Green = '<font color="Green">'
    # Br_Yellow = '<font color="Yellow">'
    # Br_Blue = '<font color="Blue">'
    # Br_Magenta = '<font color="Fuchsia">'
    # Br_Cyan = '<font color="Aqua">'
    # White = '<font color="White">'

    # ON_BLACK = '<font color="">'
    # ON_RED = '<font color="">'
    # ON_GREEN = '<font color="">'
    # ON_YELLOW = '<font color="">'
    # ON_BLUE = '<font color="">'
    # ON_MAGENTA = '<font color="">'
    # ON_CYAN = '<font color="">'
    # ON_WHITE = '<font color="">'

    # # ANSI Text attributes
    # ATTR_BOLD = "\x1b[1m"
    # ATTR_LOWI = "\x1b[2m"
    # ATTR_UNDERLINE = "\x1b[4m"
    # ATTR_BLINK = "\x1b[5m"
    # ATTR_REVERSE = "\x1b[7m"

    # END = "\x1b[0m"
    # CLEAR = "\x1b[2J"
    # RESET = "\x1bc"

    # WONR = "\x1b[1;47\x1b[1;31m"

    # # ANSI movement codes
    # CUR_RETURN = "\x1b[;0F"  # cursor return
    # CUR_UP = "\x1b[;0A"  # cursor up
    # CUR_DOWN = "\x1b[;0B"  # cursor down
    # CUR_FORWARD = "\x1b[;0C"  # cursor forward
    # CUR_BACK = "\x1b[;0D"  # cursor back
    # HIDE_CURSOR = "\x1b[?25l"  # hide cursor
    # SHOW_CURSOR = "\x1b[?25h"  # show cursor


colorTest = f"""
BLACK 
{Esc.RED}RED
{Esc.GREEN}GREEN{Esc.RESET}
YELLOW
BLUE
MAGENTA
CYAN
GRAY 
DARKGRAY 
"""

# Code ----------------------------------------------------------------------


about_html = f"""
<center><h2>{app_name}</h2></center>
<br>

<table>
  <tr>
    <td> 
      <img src={app_icon} width="48" height="48">
    </td>
    <td>
      <table>
        <tr>
          <td> 
            <b>Version: </b>
          </td>
          <td>  
            {app_version}
          </td>
        </tr>
        <tr>
          <td> 
            <b>Author: </b>
          </td>
          <td>  
            {app_author}
          </td/
        </tr>
        <tr>
          <td> 
            <b>Email: </b>
          </td>
          <td>  
            </b><a href="{app_email}">{app_email}</a>
          </td/
        </tr>
        <tr> 
          <td>
            <b>Github: </b>
          </td>
          <td>  
            <a href="{app_home}">{app_home}</a>
          </td/
          </td>
        </tr>
      </table>
  </tr>
</table>
<hr>
<br>
{app_description}
<br>
"""


class AboutDialog(QDialog):
    def __init__(self, parent=None):
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
        self.buttonBox.setStandardButtons(QDialogButtonBox.Ok)
        self.buttonBox.accepted.connect(self.accept)
        self.buttonBox.setCenterButtons(True)
        self.verticalLayout.addWidget(self.buttonBox)

    @staticmethod
    def about(parent=None):
        dialog = AboutDialog(parent)
        result = dialog.exec_()
        return result == QDialog.Accepted


settings = {
    "alias": str,
    "port": str,
    "bitrate": str,
    "bits": int,
    "parity": str,
    "stopbits": int,
}


class mpProfile:
    def __init__(self, group):
        self.settings = QSettings(app_org, app_name)
        self.group = group
        self.setDefaults()

    def setDefaults(self):
        self.alias = "Default"
        self.port = "ttyUSB1"
        self.bitrate = "9600"
        self.databits = QSerialPort.Data8
        self.parity = QSerialPort.NoParity
        self.stopbits = QSerialPort.OneStop
        self.flowcontrol = QSerialPort.NoFlowControl
        self.display = MpTerm.Ascii
        self.sync = ""

    def load(self):
        self.settings.sync()
        self.settings.beginGroup(self.group)
        self.alias = self.settings.value("alias", type=str)
        self.port = self.settings.value("port", type=str)
        self.bitrate = self.settings.value("bitrate", type=str)
        self.databits = self.settings.value("databits", type=str)
        self.parity = self.settings.value("parity", type=str)
        self.stopbits = self.settings.value("stopbits", type=str)
        self.flowcontrol = self.settings.value("flowcontrol", type=str)
        self.display = self.settings.value("display", type=str)
        self.sync = self.settings.value("sync", type=str)
        self.settings.endGroup()

        self.print()

    def print(self):
        print("Port:     ", self.port)
        print("Bitrate:  ", self.bitrate)

    def write(self):
        self.settings.beginGroup(self.group)
        self.settings.setValue("alias", self.alias)
        self.settings.setValue("port", self.port)
        self.settings.setValue("bitrate", self.bitrate)
        self.settings.setValue("databits", self.databits)
        self.settings.setValue("parity", self.parity)
        self.settings.setValue("stopbits", self.stopbits)
        self.settings.setValue("flowcontrol", self.flowcontrol)
        self.settings.setValue("display", self.display)
        self.settings.setValue("sync", self.sync)
        self.settings.endGroup()
        self.settings.sync()
        return


class TerminalWin(QTextEdit):
    def __init__(self, parent=None, sp=None):
        super().__init__(parent)
        self.sp=sp
        font = QFont()
        font.setFamily("Monospace")
        self.setFont(font)
        self.setObjectName("textEdit")
        self.setReadOnly(True)

    def keyPressEvent(self, e: QKeyEvent) -> None:
        super().keyPressEvent(e)

        logging.debug(f"  {e.key():x}  {get_description(e)}")   
        self.sp.send_string(get_key(e))
        

class SerialPort:
    def __init__(self) -> None:
        self.clear()
        self.serial_port = QSerialPort()

        # Initiate terminal state
        self.state = State.DISCONNECTED
        self.decoder = EscapeDecoder()

    def clear(self):
        self.rxCnt = 0
        self.txCnt = 0

    def send_string(self, data: str):
        self.send(bytearray(data, "utf-8"))

    def send(self, data: bytearray):
        if self.serial_port.isOpen():
            res = self.serial_port.write(data)
            if res >0: 
                self.txCnt += res
            else:
                logging.error("Could not write data.")
            

class MainForm(QMainWindow):
    def __init__(self, parent=None):
        super(MainForm, self).__init__(parent)

        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        self.sp = SerialPort()
        self.sp.serial_port.readyRead.connect(self.read)

        self.updatePorts()

        self.terminal = TerminalWin(self.ui.centralwidget, sp = self.sp)
        
        self.ui.horizontalLayout.insertWidget(1, self.terminal) 

        # Set window icon
        self.setWindowIcon(QIcon(app_icon))

        self.rxLabel = QLabel("")
        self.txLabel = QLabel("")
        self.ui.statusbar.addPermanentWidget(self.rxLabel, stretch=0)
        self.ui.statusbar.addPermanentWidget(self.txLabel, stretch=0)

        self.ui.cbStopBits.addItem("1", QSerialPort.OneStop)
        self.ui.cbStopBits.addItem("1.5", QSerialPort.OneAndHalfStop)
        self.ui.cbStopBits.addItem("2", QSerialPort.TwoStop)
        self.ui.cbStopBits.setCurrentIndex(0)

        self.ui.cbBits.addItem("5", QSerialPort.Data5)
        self.ui.cbBits.addItem("6", QSerialPort.Data6)
        self.ui.cbBits.addItem("7", QSerialPort.Data7)
        self.ui.cbBits.addItem("8", QSerialPort.Data8)
        self.ui.cbBits.setCurrentIndex(3)

        self.ui.cbParity.addItem("None", QSerialPort.NoParity)
        self.ui.cbParity.addItem("Odd", QSerialPort.OddParity)
        self.ui.cbParity.addItem("Even", QSerialPort.EvenParity)
        self.ui.cbParity.setCurrentIndex(0)

        # self.ui.cbFlowControl.addItem("No Flow Control", QSerialPort.NoFlowControl)
        # self.ui.cbFlowControl.addItem("Hardware Control", QSerialPort.HardwareControl)
        # self.ui.cbFlowControl.addItem("Software Control", QSerialPort.SoftwareControl)
        self.ui.cbFlowControl.addItem("None", QSerialPort.NoFlowControl)
        self.ui.cbFlowControl.addItem("Hardware", QSerialPort.HardwareControl)
        self.ui.cbFlowControl.addItem("Software", QSerialPort.SoftwareControl)
        self.ui.cbFlowControl.setCurrentIndex(0)
        
        self.ui.cbBitrate.addItem("300", 300)
        self.ui.cbBitrate.addItem("600", 600)
        self.ui.cbBitrate.addItem("1200", 1200)
        self.ui.cbBitrate.addItem("2400", 2400)
        self.ui.cbBitrate.addItem("4800", 4800)
        self.ui.cbBitrate.addItem("9600", 9600)
        self.ui.cbBitrate.addItem("19200", 19200)
        self.ui.cbBitrate.addItem("28400", 28400)
        self.ui.cbBitrate.addItem("57600", 57600)
        self.ui.cbBitrate.addItem("115200", 115200)
        self.ui.cbBitrate.setCurrentIndex(5)

        self.ui.cbNewline.addItem("nl", 0)
        self.ui.cbNewline.addItem("cr", 1)
        self.ui.cbNewline.addItem("cr+nl", 2)

        self.ui.cbDisplay.addItem("Ascii", MpTerm.Ascii)
        self.ui.cbDisplay.addItem("Hex", MpTerm.Hex)
        #self.ui.cbDisplay.addItem("Hex + Ascii", MpTerm.AsciiHex)

        self.ui.cbRTS.clicked.connect(self.handle_rts)
        
        # Timers
        self.timer = QTimer()
        self.timer.setInterval(1000)
        self.timer.timeout.connect(self.timerEvent)
        self.timer.start()
        
        self.timer_5 = QTimer()
        self.timer_5.setInterval(200)
        self.timer_5.timeout.connect(self.timer_5_timeout)
        self.timer_5.start()

        # event slots
        self.ui.cbBitrate.activated.connect(self.set_sp)
        self.ui.cbStopBits.activated.connect(self.set_sp)
        self.ui.cbBits.activated.connect(self.set_sp)
        self.ui.cbParity.activated.connect(self.set_sp)
        self.ui.cbFlowControl.activated.connect(self.set_sp)

        self.ui.actionNew.triggered.connect(self.new)
        self.ui.actionExit.triggered.connect(self.exitProgram)
        self.ui.actionClear.triggered.connect(self.actionClear)
        self.ui.actionAbout.triggered.connect(self.about)
        self.ui.actionPortInfo.triggered.connect(self.portInfo)

        self.ui.pbOpen.pressed.connect(self.openPort)

        self.ui.bpTest1.pressed.connect(lambda: self.send(b"ABCD"))
        self.ui.bpTest2.pressed.connect(lambda: self.send(b"0123456789"))
        self.ui.colorTest.pressed.connect(lambda: self.send(colorTest))
        self.ui.leSyncString.textChanged.connect(self.syncChanged)

        
        #self.ui.textEdit.setReadOnly(True)
        #self.ui.textEdit.keyReleaseEvent.connect(lambda: print("Hep"))

        # Initiate terminal state
        self.state = State.DISCONNECTED

        self.decoder = EscapeDecoder()

        # Configure signal handler
        signal.signal(signal.SIGUSR1, self.signal_usr1)

        # Setup of signal polling timer
        # This is required in order to allow the Qt eventloop to yield and
        # handle signal reception
        self.signal_timer = QTimer()
        self.signal_timer.start(200)
        self.signal_timer.timeout.connect(self.signal_usr1_timeout)
        self.signal_timerx = QTimer()
        self.signal_timerx.setSingleShot(True)

        self.ts = TerminalState()
        
        self.updateUi()

    def signal_usr1(self, signum, frame) -> None:
        logging.debug("USR1 signal received")
        # self.message("Port suspend signal received")
        if self.state == State.CONNECTED:
            self.serial.close()
            self.state = State.SUSPENDED
            self.signal_timerx.start(4000)
            logging.debug("Suspending port")

    def signal_usr1_timeout(self) -> None:
        # if self.signal == True:
        if self.state == State.SUSPENDED: 
            rt = self.signal_timerx.remainingTime()
            self.message(f"Port suspended. Time left {rt / 1000:.0f}")
            if rt < 0:
                self.state = State.RECONNECTING

    def timer_5_timeout(self):

        # Reconnect state
        if self.state == State.RECONNECTING:
            self.initPort()
            self.serial.clear()
            if self.serial.open(QIODevice.ReadWrite):
                self.state = State.CONNECTED
                self.message(f"Reconnected to port: /dev/{self.ui.cbPort.currentText()}")
            else:
                err = self.serial.error()
                self.messageError(
                f"Failed to open port /dev/{self.ui.cbPort.currentText()}. {errors[err]}"
                )
                #logging.debug("Reconeccting")
                self.message("Reconnecting...")

    def about(self) -> None:
        AboutDialog.about()

    def port_handler(self):
        if self.state == State.DISCONNECTED:
            pass
        
    def timerEvent(self):
        portNames = [x.portName() for x in QSerialPortInfo.availablePorts()]

        # Check if current port is still connecter (USB to serial adapters), if not close port
        if self.sp.serial_port.isOpen():
            if self.sp.serial_port.portName() not in portNames:
                self.sp.serial_port.close()
                self.state = State.DISCONNECTED
                self.messageError(f"Port {self.sp.serial_port.portName()} no longer available.")
                
        # Update list of serialports in combobox
        for x in range(self.ui.cbPort.count()):
            if self.ui.cbPort.itemText(x) not in portNames:
                self.ui.cbPort.removeItem(x)
            else:
                portNames.remove(self.ui.cbPort.itemText(x))

        for x in portNames:
            self.ui.cbPort.addItem(x)

        self.updateUi()

    def updateUi(self):
        if self.sp.serial_port.isOpen():
            self.setWindowTitle(
                f"MpTerm  /dev/{self.ui.cbPort.currentText()} {self.ui.cbBitrate.currentText()}"
            )
            self.ui.pbOpen.setText("Close")
            self.ui.cbPort.setEnabled(0)
        else:
            self.setWindowTitle("MpTerm")
            self.ui.pbOpen.setText("Open")
            self.ui.cbPort.setEnabled(1)

        self.rxLabel.setText(f'<font color="Purple"> RX: {self.sp.rxCnt:06d} ')
        self.txLabel.setText(f'<font color="Purple"> TX: {self.sp.txCnt:06d} ')

    def updatePorts(self):
        ports = QSerialPortInfo.availablePorts()
        for port in ports:
            self.ui.cbPort.addItem(port.portName())

    def handle_rts(self):
        logging.debug("RTS")
        if self.ui.cbRTS.isChecked():
            self.ui.cbRTS.setChecked(True)
            self.serial.setRequestToSend(True)
        else:
            self.ui.cbRTS.setChecked(False)
            self.serial.setRequestToSend(False)
            
    def syncChanged(self):
        try:
            self.sync = int(self.ui.leSyncString.text(), 16)

            if self.sync > 255 or self.sync < 0:
                self.sync = -1
                self.ui.lSync.setText('<font color="Red">Sync string')
            else:
                self.ui.lSync.setText('<font color="Black">Sync string')

        except:
            self.sync = -1
            text = self.ui.leSyncString.text()
            #            print(len(text), 'Text: '+text)
            if len(text) > 0:
                self.ui.lSync.setText('<font color="Red">Sync string')
            else:
                self.ui.lSync.setText('<font color="Black">Sync string')
        return

    def actionClear(self):
        pass
        # self.ui.textEdit.clear()

    # scroll down to bottom
    def scrollDown(self):
        #vsb = self.ui.textEdit.verticalScrollBar()
        #vsb.setValue(vsb.maximum())
        pass

    def _message(self, msg):
        self.ui.statusbar.showMessage(msg, 4000)

    # Show message in status bar
    def message(self, msg):
        self.ui.statusbar.setStyleSheet("color: black")
        self._message(msg)
        logging.debug(msg)

    # Show error message in status bar
    def messageError(self, msg):
        self.ui.statusbar.setStyleSheet("color: red")
        self._message(msg)
        logging.error(msg)

    # def appendText(self, str):    
    #     # move cursor to end of buffer
    #     self.ui.textEdit.moveCursor(QTextCursor.End)
    #     self.ui.textEdit.appendPlainText(str)

    def appendHtml(self, str):
        # move cursor to end of buffer
        #self.terminal.moveCursor(QTextCursor.End)
        self.terminal.insertHtml(str)

    def read(self):
        # get all data from buffer

        data = self.sp.serial_port.readAll()
        data_str = str(data, "utf-8")

        self.sp.rxCnt += data.count()

        db = data_str.replace("\x1b", "\\x1b").replace("\x0a", "\\n").replace("\x0d", '\\c')
        logging.debug(f"Data received: {data.count()} {db}")

        DisplayMode = self.ui.cbDisplay.currentData()

        if DisplayMode == MpTerm.Ascii:  # Standard ascii display mode
            self.decoder.append_string(data_str)
            
            for x in self.decoder:
                #logging.debug(x)
                if x == Ascii.NL:
                    self.appendHtml("<br>")
                    self.terminal.moveCursor(QTextCursor.StartOfLine)
                    continue

                if x == Ascii.CR:
                    self.terminal.moveCursor(QTextCursor.StartOfLine)
                    logging.debug("Carriage return")
                    continue
                    self.appendHtml("<br>")

                if x == Esc.RETURN:
                    self.terminal.moveCursor(QTextCursor.StartOfLine)
                    continue

                if x == Esc.UP:
                    self.terminal.moveCursor(QTextCursor.Up)
                    continue

                if x == " ":
                    self.appendHtml("&nbsp;")
                    continue 

                if x[0] == Esc.ESCAPE:
                    self.ts.update(e2h(x))
                    #e = e2h(x)
                    # if e in [Escape.GREEN]:
                    #     self.ts.color = e
                    # if e == Escape.END:
                    #     self.ts.color = Escape.BLACK
                    #     self.ts.attribute = Escape.ATTR_NORMAL


                if x[0] != Esc.ESCAPE:    
                    self.appendHtml(self.ts.state2html(x))
                    #self.appendHtml(x)

        elif DisplayMode == MpTerm.Hex:  # Hexadecimal display mode
            s = ""
            # self.ui.textEdit.setFont()
            for i in range(0, data.count()):
                ch = data.at(i)
                chd = int.from_bytes(ch, 'big')

                logging.debug(f"{chd:02x} {hex2str(chd)}")
                # handle sync
                # if self.sync >= 0 and ord(ch) == self.sync:
                #     s = s + '\n'

                s = s + f"{chd:02x} "

            # self.ui.textEdit.insertPlainText(s)
            self.appendHtml(s)

        
        self.scrollDown()
        self.updateUi()

    def send(self, data: bytearray):
        if self.sp.serial_port.isOpen():
            res = self.sp.serial_port.write(data)
            if res >0: 
                self.sp.txCnt += res
            else:
                logging.error("Could not write data.")
            self.updateUi()

    def send_string(self, data: str):
        self.send(bytearray(data, "utf-8"))

    def keyPressEvent(self, a: QKeyEvent):  

        logging.debug(f"  {a.key():x}  {get_description(a)}")   
        #self.send_string(get_key(a))

    def openPort(self):
        if self.sp.serial_port.isOpen():
            self.sp.serial_port.close()
            self.state = State.DISCONNECTED
            self.updateUi()
            return

        self.initPort()
        self.sp.serial_port.clear()
        res = self.sp.serial_port.open(QIODevice.ReadWrite)
        if res:
            self.message("Opening port: /dev/" + self.ui.cbPort.currentText())
            self.state = State.CONNECTED
        else:
            err = self.sp.serial_port.error()
            self.messageError(
                f"Failed to open port /dev/{self.ui.cbPort.currentText()}. {errors[err]}"
            )
            logging.error(errors[err])

        self.updateUi()

    def initPort(self):
        self.setPort()
        self.set_sp()
        # self.setBitrate()
        # self.setBits()
        # self.setStopBits()
        # self.setParity()
        # self.setFlowControl()

    def setPort(self):
        self.sp.serial_port.setPortName("/dev/" + self.ui.cbPort.currentText())

    def set_sp(self):
        self.sp.serial_port.setBaudRate(self.ui.cbBitrate.currentData())
        self.sp.serial_port.setStopBits(self.ui.cbStopBits.currentData())
        self.sp.serial_port.setDataBits(self.ui.cbBits.currentData())
        self.sp.serial_port.setParity(self.ui.cbParity.currentData())
        self.sp.serial_port.setFlowControl(self.ui.cbFlowControl.currentData())
      
    # def setBitrate(self):
    #     self.serial.setBaudRate(self.ui.cbBitrate.currentData())

    # def setStopBits(self):
    #     self.serial.setStopBits(self.ui.cbStopBits.currentData())

    # def setBits(self):
    #     self.serial.setDataBits(self.ui.cbBits.currentData())

    # def setParity(self):
    #     self.serial.setParity(self.ui.cbParity.currentData())

    # def setFlowControl(self):
    #     self.serial.setFlowControl(self.ui.cbFlowControl.currentData())

    def saveSetting(self):
        #        self.mpDefault.write()
        return

    def loadSettings(self):
        return

    def setCbText(self, cb, txt):
        a = cb.findText(txt)
        if a == -1:
            cb.setCurrentIndex(0)
        else:
            cb.setCurrentIndex(a)

    def setCbData(self, cb, data):
        a = cb.findData(data)
        if a == -1:
            cb.setCurrentIndex(0)
        else:
            cb.setCurrentIndex(a)

    def saveProfile(self, prof):
        prof.port = self.ui.cbPort.currentText()
        prof.bitrate = self.ui.cbBitrate.currentText()
        prof.databits = self.ui.cbBits.currentData()
        prof.stopbits = self.ui.cbStopBits.currentData()
        prof.parity = self.ui.cbParity.currentData()
        prof.flowcontrol = self.ui.cbFlowControl.currentData()
        prof.display = self.ui.cbDisplay.currentData()
        prof.sync = self.ui.leSyncString.text()
        prof.write()

    def loadProfile(self, prof):
        self.setCbText(self.ui.cbPort, prof.port)
        self.setCbText(self.ui.cbBitrate, prof.bitrate)
        self.setCbData(self.ui.cbBits, prof.databits)
        self.setCbData(self.ui.cbStopBits, prof.stopbits)
        self.setCbData(self.ui.cbParity, prof.parity)
        self.setCbData(self.ui.cbFlowControl, prof.flowcontrol)
        self.setCbData(self.ui.cbDisplay, prof.display)
        self.ui.leSyncString.setText(prof.sync)

    def exitProgram(self, e):
        self.saveProfile(self.mpDefault)

        self.serial.close()
        self.close()

    def ss(self, str):
        print(len(str))
        nstr = str
        for i in range(1, 16 - len(str)):
            nstr += "&nbsp;"
        return nstr

    def appendInfo(self, desc, data):
        self.ui.textEdit.insertHtml(
            f"<b>{self.ss(desc)}</b><code><font color='Green'>{data}<br>"
        )

    def portInfo(self):
        ports = QSerialPortInfo.availablePorts()
        for port in ports:
            self.appendInfo("Port:", port.portName())
            self.appendInfo("Location:", port.systemLocation())
            self.appendInfo("Vendor id:", str(port.vendorIdentifier()))
            self.appendInfo("Product id:", str(port.productIdentifier()))
            self.appendInfo("Manufacturer:", port.manufacturer())
            self.appendInfo("Description:", port.description())
            #self.ui.textEdit.insertHtml("<hr>")
            self.ui.textEdit.insertHtml("<br>")

    def new(self):
        subprocess.Popen([f"{self_dir}/mpterm.py"], shell=False)

    def openFile(self):
        dlg = QFileDialog()
        dlg.setFileMode(QFileDialog.AnyFile)
        dlg.setFilter("Text files (*.txt)")
        filenames = QStringList()


def list_ports():
    spi = QSerialPortInfo.availablePorts()
    for p in spi:
        print(f"{p.portName()}  {p.description()}  {p.systemLocation()}")


def settings():
    s = QSettings()
    sys.exit(0)


def main():
    logging_format = "[%(levelname)s] %(lineno)d %(funcName)s() : %(message)s"

    # options parsing
    parser = argparse.ArgumentParser(
        prog=app_name, add_help=True, description=app_description
    )
    parser.add_argument(
        "--version", action="version", version=f"%(prog)s {app_version}"
    )
    parser.add_argument("--info", action="store_true", help="Information about script")
    parser.add_argument("--suspend", action="store_true",
                        help="Send signal to suspend port temporary")
    parser.add_argument("--list", action="store_true", help="List serialports")
    parser.add_argument("--build", action="store_true", help="Build ui code")
    parser.add_argument("--debug", action="store_true", help="Activate debug printout")

    args = parser.parse_args()

    if args.debug:
        logging.basicConfig(format=logging_format, level=logging.DEBUG)

    if args.build:
        os.system("pyuic5 mpTerminal.ui -o ui_MainWindow.py")
        sys.exit()

    if args.list:
        list_ports()
        sys.exit()

    if args.suspend:
        with os.popen("ps aux | grep mpterm.py | grep -v -e 'grep' -e '--suspend'") as f:
            res = f.readlines()

        for r in res:
            pid = int(r.split()[1])
            logging.debug(f"Sending suspend signal to process pid={pid}")
            os.kill(pid, 10)

        sys.exit()

    app = QApplication(sys.argv)
    app.setStyle("Fusion")   # 'cleanlooks', 'gtk2', 'cde', 'motif', 'plastique', 'qt5ct-style', 'Windows', 'Fusion'
    app.setAttribute(Qt.AA_UseHighDpiPixmaps)
    
    mainForm = MainForm()
    mainForm.show()
    sys.exit(app.exec_())


# Main program handle
if __name__ == "__main__":
    try:
        main()
        sys.exit(0)
    except KeyboardInterrupt as e:  # Ctrl-C
        raise e
    except SystemExit as e:  # sys.exit()
        raise e
    except Exception as e:
        print("ERROR, UNEXPECTED EXCEPTION")
        print(str(e))
        traceback.print_exc()
        os._exit(1)
