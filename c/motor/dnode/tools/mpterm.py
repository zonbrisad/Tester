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

# Imports -------------------------------------------------------------------

import sys
import os
import subprocess
import traceback
import logging
import argparse
from datetime import datetime, date, time

from ui_MainWindow import Ui_MainWindow
#from PyQt5.QtWidgets import QApplication, QWidget, QMainWindow, QScrollBar, QLabel, QDialog

#from PyQt5.QtGui import QPalette, QColor
#from PyQt5.QtCore import QIODevice
#from PyQt5.QtCore import QCoreApplication
#from PyQt5.QtCore import QSettings
#from PyQt5.QtCore import Qt

from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

#from PyQt5 import QtCore, QtGui, QtWidgets


from PyQt5.QtSerialPort import QSerialPort
from PyQt5.QtSerialPort import QSerialPortInfo

# Settings ------------------------------------------------------------------

# Application settings
AppName     = "mpterm"
AppVersion  = "0.2"
AppLicense  = ""
AppAuthor   = "Peter Malmberg <peter.malmberg@gmail.com"
AppDesc     = "MpTerm is a simple serial terminal program"
AppOrg      = "Mudderverk"
AppDomain   = ""

# Qt settings
QCoreApplication.setOrganizationName(AppOrg)
QCoreApplication.setOrganizationDomain(AppDomain)
QCoreApplication.setApplicationName(AppName)


# Definitions ---------------------------------------------------------------

class MpTerm():
    # Display modes
    Ascii    = 0
    Hex      = 1
    AsciiHex = 2
    
    # Newline modes
    Nl       = 0
    Cr       = 1
    NlCr     = 2
    
class Esc():
    Esc = 0x1b
    
    # ANSI Colors
    BLACK         = '\e[0;300m'
    RED           = '\e[0;31m'
    GREEN         = '\e[0;32m'
    YELLOW        = '\e[0;33m'
    BLUE          = '\e[0;34m'
    MAGENTA       = "\e[0;35m"
    CYAN          = "\e[0;36m"
    GRAY          = "\e[0;37m"
    DARKGRAY      = "\e[1;30m"
    BR_RED        = "\e[1;31m"
    BR_GREEN      = "\e[1;32m"
    BR_YELLOW     = "\e[1;33m"
    BR_BLUE       = "\e[1;34m"
    BR_MAGENTA    = "\e[1;35m"
    BR_CYAN       = "\e[1;36m"
    WHITE         = "\e[1;37m"
    
    ON_BLACK      = "\e[40m"
    ON_RED        = "\e[41m"
    ON_GREEN      = "\e[42m"
    ON_YELLOW     = "\e[43m"
    ON_BLUE       = "\e[44m"
    ON_MAGENTA    = "\e[45m"
    ON_CYAN       = "\e[46m"
    ON_WHITE      = "\e[1;47m"
    
    # ANSI Text attributes
    ATTR_BOLD      = "\e[1m"
    ATTR_LOWI      = "\e[2m"
    ATTR_UNDERLINE = "\e[4m"
    ATTR_BLINK     = "\e[5m"
    ATTR_REVERSE   = "\e[7m"
    
    END           = "\e[0m"
    CLEAR         = "\e[2J"
    RESET         = "\ec"
    
    WONR          = "\e[1;47\e[1;31m"
    
    # ANSI movement codes 
    CUR_RETURN  = "\e[;0F"      # cursor return
    CUR_UP      = "\e[;0A"      # cursor up
    CUR_DOWN    = "\e[;0B"      # cursor down
    CUR_FORWARD = "\e[;0C"      # cursor forward
    CUR_BACK    = "\e[;0D"      # cursor back
    HIDE_CURSOR = "\e[?25l"     # hide cursor
    SHOW_CURSOR = "\e[?25h"     # show cursor
    
    E_RET  = 100
    E_UP   = 101
    E_DOWN = 102
    
    x = [ CUR_RETURN, CUR_UP, CUR_DOWN ]
    y = { E_RET:CUR_RETURN, 
          E_UP:CUR_UP, 
          E_DOWN:CUR_DOWN }

    @staticmethod
    def findEnd(data, idx):
        i = idx
        while (i-idx) < 12:
            ch = data.at(i)
            if ch.isalpha():
                return i
            else:
                i += 1
        return -1
      
class EscapeDecoder():
    
    def __init__(self):
        self.idx = 0
        self.clear()
        
    def clear(self):
        self.buf = bytearray()
    
    def len(self):
        return len(self.buf)
    
    def getSequence(self):
        print(self.buf)
        str = self.buf.decode('utf-8')
        
    def next(self, ch):
        print('Char: ',ch,'  Type: ', type(ch))
#        if ord(ch) == Esc.Esc:
        if ch == Esc.Esc:
            print("EscapeDecoder: found escape sequence")
            self.clear()
            self.buf.append(ch)
            return -1
            
        if len(self.buf) > 0:   # an escape sequence has been detected

            if ch.isalpha(): # end of escape message
                self.buf.append(ch)
                print("EscapeDecoder: End of escape message, len=", self.len())
                self.getSequence()
#                print(self.buf)

                self.clear()
                return -1
            else:
                self.buf.append(ch)
                return -1
            
            
            if len(self.buf) > 10:
                print("EscapeDecoder: oversize, len=", self.len())
                self.clear()
                return -1
            
        return ord(ch)
    
    

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
                                
        self.verticalLayout = QVBoxLayout(self)
        self.verticalLayout.setSpacing(2)
        #horizontalLayout.addLayout(self.verticalLayout)
        
        self.mainLayout = QHBoxLayout()
        self.mainLayout.setContentsMargins(2, 2, 2, 2)
        self.mainLayout.setSpacing(2)

        self.buttonLayout = QHBoxLayout()
        self.buttonLayout.setContentsMargins(2, 2, 2, 2)
        self.buttonLayout.setSpacing(2)

        self.setLayout(self.verticalLayout)
                
        # TextEdit
        self.textEdit = QTextEdit(self)
        self.textEdit.setReadOnly(True)
        self.verticalLayout.addWidget(self.textEdit)

        # Buttonbox
        self.buttonBox = QDialogButtonBox(self)
        self.buttonBox.setOrientation(Qt.Horizontal)
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
    
settings = { 'alias':str,     
             'port':   str,  
             'bitrate':str,  
             'bits':  int,   
             'parity':str,   
             'stopbits':int, 
             }
             
#print(settings)
    
class mpProfile():
    def __init__(self, group):
        self.settings = QSettings(AppOrg, AppName)
        self.group    = group
        self.setDefaults()
        
    def setDefaults(self):
        self.alias       = "Default"
        self.port        = "ttyUSB1"
        self.bitrate     = '9600'
        self.databits    = QSerialPort.Data8
        self.parity      = QSerialPort.NoParity
        self.stopbits    = QSerialPort.OneStop
        self.flowcontrol = QSerialPort.NoFlowControl
        self.display     = MpTerm.Ascii
        self.sync        = ''

    def load(self):
        self.settings.sync()
        self.settings.beginGroup(self.group)
        self.alias       = self.settings.value("alias",       type=str)
        self.port        = self.settings.value("port",        type=str)
        self.bitrate     = self.settings.value("bitrate",     type=str)
        self.databits    = self.settings.value("databits",    type=str)
        self.parity      = self.settings.value("parity",      type=str)
        self.stopbits    = self.settings.value("stopbits",    type=str)
        self.flowcontrol = self.settings.value("flowcontrol", type=str)
        self.display     = self.settings.value("display",     type=str)
        self.sync        = self.settings.value("sync",        type=str)
        self.settings.endGroup()
        
        self.print()
        
    def print(self):
        print("Port:     ", self.port)
        print("Bitrate:  ", self.bitrate)
        
    def write(self):
        self.settings.beginGroup(self.group)
        self.settings.setValue("alias",       self.alias)
        self.settings.setValue("port",        self.port)
        self.settings.setValue("bitrate",     self.bitrate)
        self.settings.setValue("databits",    self.databits)
        self.settings.setValue("parity",      self.parity)
        self.settings.setValue("stopbits",    self.stopbits)
        self.settings.setValue("flowcontrol", self.flowcontrol)
        self.settings.setValue("display",     self.display)
        self.settings.setValue("sync",        self.sync)
        self.settings.endGroup()
        self.settings.sync()
        return

class MainForm(QMainWindow):
    def __init__(self, parent=None):
        super(MainForm, self).__init__(parent)
        
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        
        self.rxLabel = QLabel('')
        self.txLabel = QLabel('')
        self.ui.statusbar.addWidget(self.rxLabel)
        self.ui.statusbar.addWidget(self.txLabel)
        
        self.rxCnt = 0
        self.txCnt = 0
               
        self.serial = QSerialPort()
        self.serial.readyRead.connect(self.read)
        
        self.updatePorts()
        
        self.ui.cbStopBits.addItem("1",   QSerialPort.OneStop)
        self.ui.cbStopBits.addItem("1.5", QSerialPort.OneAndHalfStop)
        self.ui.cbStopBits.addItem("2",   QSerialPort.TwoStop)

        self.ui.cbBits.addItem("5", QSerialPort.Data5)
        self.ui.cbBits.addItem("6", QSerialPort.Data6)
        self.ui.cbBits.addItem("7", QSerialPort.Data7)
        self.ui.cbBits.addItem("8", QSerialPort.Data8)
                
        self.ui.cbParity.addItem("None", QSerialPort.NoParity)
        self.ui.cbParity.addItem("Odd",  QSerialPort.OddParity)
        self.ui.cbParity.addItem("Even", QSerialPort.EvenParity)
        
        self.ui.cbFlowControl.addItem("No Flow Control",  QSerialPort.NoFlowControl )
        self.ui.cbFlowControl.addItem("Hardware Control", QSerialPort.HardwareControl )
        self.ui.cbFlowControl.addItem("Software Control", QSerialPort.SoftwareControl )

        self.ui.cbBitrate.addItem('300',   300    )
        self.ui.cbBitrate.addItem('600',   600    )
        self.ui.cbBitrate.addItem("1200",  1200   )
        self.ui.cbBitrate.addItem("2400",  2400   )
        self.ui.cbBitrate.addItem("4800",  4800   )
        self.ui.cbBitrate.addItem('9600',  9600   )
        self.ui.cbBitrate.addItem("19200", 19200  )
        self.ui.cbBitrate.addItem("28400", 28400  )
        self.ui.cbBitrate.addItem("57600", 57600  )        

        self.ui.cbBitrate.addItem("115200",115200 )
        
        self.ui.cbNewline.addItem("nl",    0 )
        self.ui.cbNewline.addItem("cr",    1 )
        self.ui.cbNewline.addItem("cr+nl", 2 )
        
        self.ui.cbDisplay.addItem("Ascii",       MpTerm.Ascii    )
        self.ui.cbDisplay.addItem("Hex",         MpTerm.Hex      )
        self.ui.cbDisplay.addItem("Hex + Ascii", MpTerm.AsciiHex )

        # Timers
        self.timer = QTimer()
        self.timer.setInterval(1000)
        self.timer.timeout.connect(self.timerEvent)
        self.timer.start()
        
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

        self.ui.leSyncString.textChanged.connect(self.syncChanged)
        
        self.ui.textEdit.setReadOnly(True)
        
        self.mpDefault = mpProfile("Default")
        self.mpDefault.load()
        self.loadProfile(self.mpDefault)
                
        self.ui.textEdit.setMaximumBlockCount(200)
        
        # Some debug widgets (comment out for production)
        #self.ui.gbDebug.hide()
        
#        palette = self.palette().text().color()
#        color = self.palette().text().color()
#        r,g,b=color.getRgb()
#        print (palette)

        self.escDec = EscapeDecoder()

        
        self.updateUi()
        
    def about(self):
        AboutDialog.about()
        
    def timerEvent(self):
        pass
#        if (!self.serial.isOpen()):
#            print("Timer event")

    def syncChanged(self):
        try:
            self.sync = int(self.ui.leSyncString.text(), 16)

            if self.sync>255 or self.sync<0:
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
        
    def test1(self):
        self.send(b'ABCD')
        return
    
    def test2(self):
        self.send(b'0123456789')
        return
        
    def testing(self):
#        p = self.ui.plainTextEdit.palette()
#        p = QPalette()
#        c = QColor("red")
#        p.setColor( QPalette.Text, c )
#        self.ui.plainTextEdit.setPalette(p)
#        self.ui.plainTextEdit.appendPlainText("A")
        #print(chr(65))        
        x = b'\n'
#        print(x.decode("utf-8"))
#        self.ui.plainTextEdit.appendPlainText(x.decode("utf-8"))
#        self.ui.plainTextEdit.appendPlainText(x.decode("utf-8"))
#        self.ui.plainTextEdit.insertPlainText(x.decode("utf-8"))
        #QString notifyHtml = "<font color=\"Lime\">";

        self.showMessage("Nisse")
        self.scrollDown()
        
                
    # scroll down to bottom
    def scrollDown(self):
#        vsb = self.ui.plainTextEdit.verticalScrollBar()
#        vsb.setValue(vsb.maximum())
        
        vsb = self.ui.textEdit.verticalScrollBar()
        vsb.setValue(vsb.maximum())
        
    def _message(self,msg):    
        self.ui.statusbar.showMessage(msg, 4000)
    
    # Show message in status bar
    def message(self, msg):
        self.ui.statusbar.setStyleSheet("color: black")
        self._message(msg)
        
    # Show error message in status bar
    def messageError(self, msg):    
        self.ui.statusbar.setStyleSheet("color: red")
        self._message(msg)
        
        
    def decodeEscape(self, data, index):
        end = Esc.findEnd(data, index)        
        if (end<0):
            print("Negative escape")
            return 1
            
        endCh = data.at(end)
        print("Escape: ",(end-index), "  Ch:", endCh)

        if endCh == 'c':
            print('Escape clear')
        #    return 2
        
        elif endCh == 'm': # Attribute and colors
            print('Esc: Attribute/colors')

        return (end-index+1)
        
    def read(self):
        # get all data from buffer
        data = self.serial.readAll()
        
#        print("Receive: ", len(data), '  Type data: ', type(data))

        # move cursor to end of buffer
        self.ui.textEdit.moveCursor (QTextCursor.End);
        
        DisplayMode = self.ui.cbDisplay.currentData()
                    
        if DisplayMode == MpTerm.Ascii:   # Standard ascii display mode
            i = 0 
            while i<data.count():
                
                ch = self.escDec.next(ord(data.at(i)))
                if (ch > 0): 
                    if ch == '\n':
                        self.ui.textEdit.insertPlainText('\n')
                    else:
                        self.ui.textEdit.insertPlainText(chr(ch))
                
                i += 1
                        
#                if ord(ch) == 0x1b:
#                    print('Byte nr: ',i, 'byte: {0:02x} '.format(ord(ch)), ' ch: ',ch)
#                if ch == '\n':
#                    self.ui.textEdit.insertPlainText('\n')
#                    i += 1
#                elif ord(ch) == Esc.Esc:
                    #i +=  self.decodeEscape(data, i)
#                    i += 1
#                    pass
#                else:
#                    self.ui.textEdit.insertPlainText(ch);
#                    i += 1

        elif DisplayMode == MpTerm.Hex:  # Hexadecimal display mode
            s = ''
            for i in range(0, data.count()):
                ch = data.at(i)
                
                # handle sync 
                if self.sync >= 0 and ord(ch) == self.sync:
                    s = s + '\n'

                s = s + '{0:02x} '.format(ord(ch))
                
            self.ui.textEdit.insertPlainText(s)
            #self.ui.textEdit.insertPlainText( '{0:02x} '.format(ord(ch)))
                    
        self.ui.textEdit.moveCursor(QTextCursor.End)

        self.rxCnt += data.count()
        self.scrollDown()
        self.updateUi()
        
        
    def send(self, data):
        if (self.serial.isOpen()):
            self.serial.write(data)
            self.txCnt += len(data)
            self.updateUi()
            
    def sendStr(self, str):
        return
        
    def keyPressEvent(self, a):
#        print("  ",a.key(),"  ",a.text(), "  ord: ",ord(a.text()))
        
        if a.key() == Qt.Key_Escape:
            print("Escape")
            return

        if (a.key() == Qt.Key_Enter) or (a.key() == Qt.Key_Return):
            self.send(b'\n')
            print("Enter")
            return

        if a.key() == Qt.Key_Left:
            print("Left")
            return

        if a.key() == Qt.Key_Delete:
            print("Delete")
            return            

        if a.key() == Qt.Key_Insert:
            print("Insert")
            return

        if a.key() == Qt.Key_Backspace:
            print("Backspace")
            return
            
        if a.key() == Qt.Key_End:
            print("End")
            return

        if a.key() == Qt.Key_F1:
            print("F1")
            return

#        if (self.serial.isOpen()):
#        msg = bytearray([ a.key() ])
#        self.sendByte(msg)
        #msg = bytearray([ a.key() ])
        msg = bytearray([ ord(a.text()) ])
        self.send(msg)
        
    def kalle(self):
#        self.ui.plainTextEdit.appendPlainText("A")
        print("Kalle")
        
    def updateUi(self):
        if (self.serial.isOpen()):
            self.setWindowTitle('MpTerm  /dev/'+self.ui.cbPort.currentText() + '  '+self.ui.cbBitrate.currentText())
            self.ui.pbOpen.setText("Close")
            self.ui.cbPort.setEnabled(0)
        else:
            self.setWindowTitle('MpTerm')
            self.ui.pbOpen.setText("Open")
            self.ui.cbPort.setEnabled(1)
            
        self.rxLabel.setText('RX: '+str(self.rxCnt))
        self.txLabel.setText('TX: '+str(self.txCnt))            

    def openPort(self):
        if (self.serial.isOpen()):
            self.serial.close()
            self.updateUi() 
            return

        self.initPort()
        self.serial.clear()
        res = self.serial.open(QIODevice.ReadWrite)
        if (res):
            self.message('Opening port: /dev/'+self.ui.cbPort.currentText())
        else:
            self.messageError('Failed to open port: /dev/'+self.ui.cbPort.currentText())
            err = self.serial.error()
            print(err)
        
        self.updateUi() 

    def initPort(self):
        self.setPort()
        self.setBitrate()
        self.setBits()
        self.setStopBits()
        self.setParity()
        self.setFlowControl()
        
    def setPort(self):
        self.serial.setPortName("/dev/"+self.ui.cbPort.currentText())
        
    def setBitrate(self):
        self.serial.setBaudRate( self.ui.cbBitrate.currentData())
        
    def setStopBits(self):
        self.serial.setStopBits( self.ui.cbStopBits.currentData())
        
    def setBits(self):
        self.serial.setDataBits( self.ui.cbBits.currentData())

    def setParity(self):
        self.serial.setParity( self.ui.cbParity.currentData())
    
    def setFlowControl(self):
        self.serial.setFlowControl( self.ui.cbFlowControl.currentData())

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
        prof.port        = self.ui.cbPort.currentText()
        prof.bitrate     = self.ui.cbBitrate.currentText()
        prof.databits    = self.ui.cbBits.currentData()
        prof.stopbits    = self.ui.cbStopBits.currentData()
        prof.parity      = self.ui.cbParity.currentData()
        prof.flowcontrol = self.ui.cbFlowControl.currentData()
        prof.display     = self.ui.cbDisplay.currentData()
        prof.sync        = self.ui.leSyncString.text()
        prof.write()
        
        
    def loadProfile(self, prof):
        self.setCbText(self.ui.cbPort,        prof.port)
        self.setCbText(self.ui.cbBitrate,     prof.bitrate)
        self.setCbData(self.ui.cbBits,        prof.databits)
        self.setCbData(self.ui.cbStopBits,    prof.stopbits)
        self.setCbData(self.ui.cbParity,      prof.parity)
        self.setCbData(self.ui.cbFlowControl, prof.flowcontrol)
        self.setCbData(self.ui.cbDisplay,     prof.display)
        self.ui.leSyncString.setText(prof.sync)
        
    def exitProgram(self, e):
        self.saveProfile(self.mpDefault)
        
        self.serial.close()
        self.close()
        
    
    def ss(self, str):
        print(len(str))
        nstr = str
        for i in range(1, 16-len(str)):
            nstr += '&nbsp;'
        return nstr
    
    def appendInfo(self, desc, data):
        self.ui.textEdit.appendHtml('<b>'+self.ss(desc)+'</b><code><font color="Green">'+data)
        
    def portInfo(self):
        self.ss("Kalle")
        ports = QSerialPortInfo.availablePorts()
        for port in ports:
            self.appendInfo('Port:', port.portName() )
            self.appendInfo('Location:', port.systemLocation() )
            self.appendInfo('Vendor id:', str(port.vendorIdentifier())  )
            self.appendInfo('Product id:', str(port.productIdentifier()) )
            self.appendInfo('Manufacturer:', port.manufacturer()  )
            self.appendInfo('Description:', port.description()   )
            self.ui.textEdit.appendHtml('<b>')
        
    def updatePorts(self):
        ports = QSerialPortInfo.availablePorts()
        for port in ports:
            self.ui.cbPort.addItem(port.portName())
            
    def new(self):
        subprocess.Popen([scriptPath+"/mpterm.py", ""], shell=False)
        
    def openFile(self):
        dlg = QFileDialog()
        dlg.setFileMode(QFileDialog.AnyFile)
        dlg.setFilter("Text files (*.txt)")
        filenames = QStringList()


def findPorts():
    ports = []
    for n, (port, desc, hwid) in enumerate(sorted(comports()), 1):
        sys.stderr.write('--- {:2}: {:20} {}\n'.format(n, port, desc))
        ports.append(port)
        
def findPorts2():        
    spi = QSerialPortInfo.availablePorts()
    for p in spi:
        print(p.portName()," ", p.description(), ' ',p.systemLocation())

def settings():
    s = QSettings()
    sys.exit(0)

def mainApplication():
#    settings()
    
    app = QApplication(sys.argv)
    mainForm = MainForm()
    mainForm.show()
    sys.exit(app.exec_())
    return

def main():
    #logging.basicConfig(level=logging.DEBUG)
    mainApplication()

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
    
    if args.a:
        print("Boolean argument")
        
    if args.b:
        print("String argument = " + args.b)
            
    if args.c:
        print("Integer argument = " + str(args.c) )

    if args.dlist:
        print("List = ", args.dlist )
    
        
    return


# Absolute path to script itself        
scriptPath = os.path.abspath(os.path.dirname(sys.argv[0]))

# Uncomment to use logfile
#LogFile     = "pyplate.log"

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
