#
#
#
#
#


# Imports -------------------------------------------------------------------
import sys
from PyQt4.QtGui import *
 
# Settings ------------------------------------------------------------------
AppName     = "Test"
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
    w = QWidget()
 
    global w
    
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
    #mainMenu = w.menuBar()
    #mainMenu.setNativeMenuBar(False)
    #fileMenu = mainMenu.addMenu('&amp;File')
    
    # Statusbar
    #w.statusBar().showMessage('Kalle')
    
    # Show window
    w.show() 
    
    sys.exit(app.exec_())


    
if __name__ == '__main__':
    main()
