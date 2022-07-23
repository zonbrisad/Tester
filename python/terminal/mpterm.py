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
from PyQt5.QtGui import QTextCursor, QIcon, QFont
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

from escape import Esc, EscapeDecoder

# Settings ------------------------------------------------------------------

# Absolute path to script itself
self_dir = os.path.abspath(os.path.dirname(sys.argv[0]))

app_name = "mpterm"
app_version = "0.2"
app_license = ""
app_author = "Peter Malmberg <peter.malmberg@gmail.com"
app_org = ""
app_description = "MpTerm is a simple serial terminal program"
app_icon = f"{self_dir}/mp_icon.png"
# app_icon = f"{self_dir}/mp_icon2.svg"

# Definitions ---------------------------------------------------------------

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

    Black = '<font color="Black">'
    Red = '<font color="DarkRed">'
    Green = '<font color="Green">'
    Yellow = '<font color="Yellow">'
    Blue = '<font color="Blue">'
    Magenta = '<font color="Purple">'
    Cyan = '<font color="Teal">'
    Gray = '<font color="Gray">'
    Darkgray = '<font color="Black">'
    Br_Red = '<font color="Red">'
    Br_Green = '<font color="Green">'
    Br_Yellow = '<font color="Yellow">'
    Br_Blue = '<font color="Blue">'
    Br_Magenta = '<font color="Fuchsia">'
    Br_Cyan = '<font color="Aqua">'
    White = '<font color="White">'

    ON_BLACK = '<font color="">'
    ON_RED = '<font color="">'
    ON_GREEN = '<font color="">'
    ON_YELLOW = '<font color="">'
    ON_BLUE = '<font color="">'
    ON_MAGENTA = '<font color="">'
    ON_CYAN = '<font color="">'
    ON_WHITE = '<font color="">'

    # ANSI Text attributes
    ATTR_BOLD = "\x1b[1m"
    ATTR_LOWI = "\x1b[2m"
    ATTR_UNDERLINE = "\x1b[4m"
    ATTR_BLINK = "\x1b[5m"
    ATTR_REVERSE = "\x1b[7m"

    END = "\x1b[0m"
    CLEAR = "\x1b[2J"
    RESET = "\x1bc"

    WONR = "\x1b[1;47\x1b[1;31m"

    # ANSI movement codes
    CUR_RETURN = "\x1b[;0F"  # cursor return
    CUR_UP = "\x1b[;0A"  # cursor up
    CUR_DOWN = "\x1b[;0B"  # cursor down
    CUR_FORWARD = "\x1b[;0C"  # cursor forward
    CUR_BACK = "\x1b[;0D"  # cursor back
    HIDE_CURSOR = "\x1b[?25l"  # hide cursor
    SHOW_CURSOR = "\x1b[?25h"  # show cursor


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
<img src={app_icon} width="48" height="48">
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


class MainForm(QMainWindow):
    def __init__(self, parent=None):
        super(MainForm, self).__init__(parent)

        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        # Set window icon
        self.setWindowIcon(QIcon(app_icon))

        self.rxLabel = QLabel("")
        self.txLabel = QLabel("")
        self.ui.statusbar.addPermanentWidget(self.rxLabel, stretch=0)
        self.ui.statusbar.addPermanentWidget(self.txLabel, stretch=0)

        # self.sbb = QPushButton("Sbb", self.ui.centralwidget)
        # self.ui.statusbar.addPermanentWidget(self.sbb)

        self.rxCnt = 0
        self.txCnt = 0

        self.serial = QSerialPort()
        self.serial.readyRead.connect(self.read)

        self.updatePorts()

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
        self.ui.cbBitrate.activated.connect(self.setBitrate)
        self.ui.cbStopBits.activated.connect(self.setStopBits)
        self.ui.cbBits.activated.connect(self.setBits)
        self.ui.cbParity.activated.connect(self.setParity)
        self.ui.cbFlowControl.activated.connect(self.setFlowControl)

        self.ui.actionNew.triggered.connect(self.new)
        self.ui.actionExit.triggered.connect(self.exitProgram)
        self.ui.actionClear.triggered.connect(self.actionClear)
        self.ui.actionAbout.triggered.connect(self.about)
        self.ui.actionPortInfo.triggered.connect(self.portInfo)

        self.ui.pushButton.pressed.connect(self.testing)
        self.ui.pbOpen.pressed.connect(self.openPort)

        self.ui.bpTest1.pressed.connect(self.test1)
        self.ui.bpTest2.pressed.connect(self.test2)
        self.ui.colorTest.pressed.connect(self.colorTest)

        self.ui.leSyncString.textChanged.connect(self.syncChanged)

        self.ui.textEdit.setReadOnly(True)

        # self.mpDefault = mpProfile("Default")
        # self.mpDefault.load()
        # self.loadProfile(self.mpDefault)

        # self.ui.textEdit.setMaximumBlockCount(200)

        # Some debug widgets (comment out for production)
        # self.ui.gbDebug.hide()

        #        palette = self.palette().text().color()
        #        color = self.palette().text().color()
        #        r,g,b=color.getRgb()
        #        print (palette)

        # Initiate terminal state
        self.state = State.DISCONNECTED

        self.escDec = EscapeDecoder()

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

        # Recconect state
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
        # logging.debug(portNames)

        # Check if current port is still connecter (USB to serial adapters), if not close port
        if self.serial.isOpen():
            if self.serial.portName() not in portNames:
                self.serial.close()
                self.state = State.DISCONNECTED
                self.messageError(f"Port {self.serial.portName()} no longer available.")
                
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
        if self.serial.isOpen():
            self.setWindowTitle(
                f"MpTerm  /dev/{self.ui.cbPort.currentText()} {self.ui.cbBitrate.currentText()}"
            )
            self.ui.pbOpen.setText("Close")
            self.ui.cbPort.setEnabled(0)
        else:
            self.setWindowTitle("MpTerm")
            self.ui.pbOpen.setText("Open")
            self.ui.cbPort.setEnabled(1)

        self.rxLabel.setText(f'<font color="Purple"> RX: {self.rxCnt:06d} ')
        self.txLabel.setText(f'<font color="Purple"> TX: {self.txCnt:06d} ')

    def updatePorts(self):
        ports = QSerialPortInfo.availablePorts()
        for port in ports:
            self.ui.cbPort.addItem(port.portName())

    #       os.path.exists(f"/dev/{}")

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
        self.ui.textEdit.clear()

    def colorTest(self):
        self.send(colorTest)

    def test1(self):
        self.send(b"ABCD")

    def test2(self):
        self.send(b"0123456789")

    def testing(self):
        #        p = self.ui.plainTextEdit.palette()
        #        p = QPalette()
        #        c = QColor("red")
        #        p.setColor( QPalette.Text, c )
        #        self.ui.plainTextEdit.setPalette(p)
        #        self.ui.plainTextEdit.appendPlainText("A")
        # print(chr(65))
        x = b"\n"
        #        print(x.decode("utf-8"))
        #        self.ui.plainTextEdit.appendPlainText(x.decode("utf-8"))
        #        self.ui.plainTextEdit.appendPlainText(x.decode("utf-8"))
        #        self.ui.plainTextEdit.insertPlainText(x.decode("utf-8"))
        # QString notifyHtml = "<font color=\"Lime\">";

        self.showMessage("Nisse")
        self.scrollDown()

    # scroll down to bottom
    def scrollDown(self):
        #        vsb = self.ui.plainTextEdit.verticalScrollBar()
        #        vsb.setValue(vsb.maximum())

        vsb = self.ui.textEdit.verticalScrollBar()
        vsb.setValue(vsb.maximum())

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

    def decodeEscape(self, data, index):
        end = Esc.findEnd(data, index)
        if end < 0:
            logging.debug("Negative escape")
            return 1

        endCh = data.at(end)
        logging.debug(f"Escape: {end-index}  Ch: {endCh}")

        if endCh == "c":
            logging.debug("Escape clear")
        #    return 2

        elif endCh == "m":  # Attribute and colors
            logging.debug("Esc: Attribute/colors")

        return end - index + 1

    def appendText(self, str):
        # move cursor to end of buffer
        self.ui.textEdit.moveCursor(QTextCursor.End)
        self.ui.textEdit.appendPlainText(str)

    def appendHtml(self, str):
        # move cursor to end of buffer
        self.ui.textEdit.moveCursor(QTextCursor.End)
        self.ui.textEdit.insertHtml(str)

    def read(self):
        # get all data from buffer
        data = self.serial.readAll()

        logging.debug(f"Data received: {len(data)}")

        DisplayMode = self.ui.cbDisplay.currentData()

        if DisplayMode == MpTerm.Ascii:  # Standard ascii display mode
            self.color = ""
            i = 0
            st = ""
            while i < data.count():
                ch = self.escDec.next(data.at(i))
                logging.debug(
                    f"Char: {ch}  Type: {type(ch)}   Decoded: {str(data, 'utf-8')}"
                )
                if (len(ch) == 1) and (ord(ch) > 0):
                    if ch == b"\n":
                        #                        str += '\n'
                        st += "<br>"
                    else:
                        st += str(ch, "utf-8")

                if len(ch) > 1:
                    #                    chx = bytearray(ch, 'utf-8')
                    #                    print(chx)

                    if ch == Esc.BLACK:
                        self.color = MpTerm.Black
                    elif ch == Esc.RED:
                        self.color = MpTerm.Red
                    #                self.ui.textEdit.setColor(QColor('Red'))
                    elif ch == Esc.GREEN:
                        self.color = MpTerm.Green
                    elif ch == Esc.YELLOW:
                        self.color = MpTerm.Yellow
                    elif ch == Esc.BLUE:
                        self.color = MpTerm.Blue
                    elif ch == Esc.MAGENTA:
                        self.color = MpTerm.Magenta
                    elif ch == Esc.CYAN:
                        self.color = MpTerm.Cyan
                    elif ch == Esc.GRAY:
                        self.color = MpTerm.Gray
                    elif ch == Esc.DARKGRAY:
                        self.color = MpTerm.Darkgray
                    elif ch == Esc.BR_RED:
                        self.color = MpTerm.Br_Red
                    elif ch == Esc.BR_GREEN:
                        self.color = MpTerm.Br_Green
                    elif ch == Esc.BR_YELLOW:
                        self.color = MpTerm.Br_Green
                    elif ch == Esc.BR_BLUE:
                        self.color = MpTerm.Br_Blue
                    elif ch == Esc.BR_MAGENTA:
                        self.color = MpTerm.Br_Magenta
                    elif ch == Esc.BR_CYAN:
                        self.color = MpTerm.Br_Cyan
                    elif ch == Esc.WHITE:
                        self.color = MpTerm.White

                    else:
                        pass

                i += 1

            self.appendHtml(st)

        elif DisplayMode == MpTerm.Hex:  # Hexadecimal display mode
            s = ""
            # self.ui.textEdit.setFont()
            for i in range(0, data.count()):
                ch = data.at(i)

                logging.debug(f"type: {type(ch)}  {int.from_bytes(ch, 'big'):02x}")
                # handle sync
                # if self.sync >= 0 and ord(ch) == self.sync:
                #     s = s + '\n'

                s = s + f"{int.from_bytes(ch, byteorder='big'):02x} "

            # self.ui.textEdit.insertPlainText(s)
            self.appendHtml(s)

        self.rxCnt += data.count()
        self.scrollDown()
        self.updateUi()

    def send(self, data):
        if self.serial.isOpen():
            self.serial.write(data)
            self.txCnt += len(data)
            self.updateUi()

    def sendStr(self, str):
        return

    def keyPressEvent(self, a):
        logging.debug(f"  {a.key()}  {a.text()}  ord: {ord(a.text())}")

        if a.key() == Qt.Key_Escape:
            logging.debug("Escape")
            return

        if (a.key() == Qt.Key_Enter) or (a.key() == Qt.Key_Return):
            self.send(b"\n")
            logging.debug("Enter")
            return

        if a.key() == Qt.Key_Left:
            logging.debug("Left")
            return

        if a.key() == Qt.Key_Delete:
            logging.debug("Delete")
            return

        if a.key() == Qt.Key_Insert:
            logging.debug("Insert")
            return

        if a.key() == Qt.Key_Backspace:
            logging.debug("Backspace")
            return

        if a.key() == Qt.Key_End:
            logging.debug("End")
            return

        if a.key() == Qt.Key_F1:
            logging.debug("F1")
            return

        #        if (self.serial.isOpen()):
        #        msg = bytearray([ a.key() ])
        #        self.sendByte(msg)
        # msg = bytearray([ a.key() ])
        msg = bytearray([ord(a.text())])
        self.send(msg)

    def openPort(self):
        if self.serial.isOpen():
            self.serial.close()
            self.state = State.DISCONNECTED
            self.updateUi()
            return

        self.initPort()
        self.serial.clear()
        res = self.serial.open(QIODevice.ReadWrite)
        if res:
            self.message("Opening port: /dev/" + self.ui.cbPort.currentText())
            self.state = State.CONNECTED
        else:
            err = self.serial.error()
            self.messageError(
                f"Failed to open port /dev/{self.ui.cbPort.currentText()}. {errors[err]}"
            )
            logging.error(errors[err])

        self.updateUi()

    def initPort(self):
        self.setPort()
        self.setBitrate()
        self.setBits()
        self.setStopBits()
        self.setParity()
        self.setFlowControl()

    def setPort(self):
        self.serial.setPortName("/dev/" + self.ui.cbPort.currentText())

    def setBitrate(self):
        self.serial.setBaudRate(self.ui.cbBitrate.currentData())

    def setStopBits(self):
        self.serial.setStopBits(self.ui.cbStopBits.currentData())

    def setBits(self):
        self.serial.setDataBits(self.ui.cbBits.currentData())

    def setParity(self):
        self.serial.setParity(self.ui.cbParity.currentData())

    def setFlowControl(self):
        self.serial.setFlowControl(self.ui.cbFlowControl.currentData())

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
        self.ui.textEdit.appendHtml(
            "<b>" + self.ss(desc) + '</b><code><font color="Green">' + data
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
            # self.ui.textEdit.appendHtml('<b>')

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
    logging_format = "[%(levelname)s] Line: %(lineno)d %(message)s"

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
