#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
#
# A bashplate like python script
#
# File:    bpp.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:    2022-05-22
# License: MIT
# Python:  3
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
#


class Esc:
    ESC = 0x1b    

    """ ANSI foreground colors codes """
    BLACK = "\033[0;30m"        # Black
    RED = "\033[0;31m"          # Red
    GREEN = '\033[0;32m'        # Green
    YELLOW = '\033[0;33m'       # Yellow
    BLUE = '\033[0;34m'         # Blue
    MAGENTA = '\033[0;35m'      # Magenta
    CYAN = '\033[0;36m'         # Cyan
    GRAY = '\033[0;37m'         # Gray
    DARKGRAY = '\033[1;30m'     # Dark Gray
    BR_RED = '\033[1;31m'       # Bright Red
    BR_GREEN = '\033[1;32m'     # Bright Green
    BR_YELLOW = '\033[1;33m'    # Bright Yellow
    BR_BLUE = '\033[1;34m'      # Bright Blue
    BR_MAGENTA = '\033[1;35m'   # Bright Magenta
    BR_CYAN = '\033[1;36m'      # Bright Cyan
    WHITE = '\033[1;37m'        # White

    # ANSI background color codes
    #
    ON_BLACK = '\033[40m'       # Black
    ON_RED = '\033[41m'         # Red
    ON_GREEN = '\033[42m'       # Green
    ON_YELLOW = '\033[43m'      # Yellow
    ON_BLUE = '\033[44m'        # Blue
    ON_MAGENTA = '\033[45m'     # Magenta
    ON_CYAN = '\033[46m'        # Cyan
    ON_WHITE = '\033[47m'       # White

    # ANSI Text attributes
    ATTR_BOLD = '\033[1m'
    ATTR_LOWI = '\033[2m'
    ATTR_UNDERLINE = '\033[4m'
    ATTR_BLINK = '\033[5m'
    ATTR_REVERSE = '\033[7m'

    END = '\x1b[0m'
    CLEAR = '\x1b[2J'
    RESET = '\x1bc'
    
    WONR = '\x1b[1;47\x1b[1;31m'

    # ANSI cursor operations
    #
    RETURN = '\033[F'           # Move cursor to begining of line
    UP = '\033[A'               # Move cursor one line up
    DOWN = '\033[B'             # Move cursor one line down
    FORWARD = '\033[C'          # Move cursor forward
    BACK = '\033[D'             # Move cursor backward
    HIDE = '\033[?25l'          # Hide cursor
    END = '\033[m'              # Clear Attributes

    # ANSI movement codes 
    CUR_RETURN = '\x1b[;0F'      # cursor return
    CUR_UP = '\x1b[;0A'      # cursor up
    CUR_DOWN = '\x1b[;0B'      # cursor down
    CUR_FORWARD = '\x1b[;0C'      # cursor forward
    CUR_BACK = '\x1b[;0D'      # cursor back
    CUR_HIDE = '\x1b[?25l'     # hide cursor
    CUR_SHOW = '\x1b[?25h'     # show cursor
    
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
        self.buf = ''
#        self.buf = bytearray()
   
    def append(self, ch):
        self.buf += ch 
        #self.buf.append(ch)
    
    def len(self):
        return len(self.buf)
    
    def getSequence(self):
        print(self.buf)
#        str = self.buf.decode('utf-8')
        return self.buf
        
    def next(self, ch):
#        print('Char: ',ch,'  Type: ', type(ch))
        if ord(ch) == Esc.Esc:
            print("EscapeDecoder: found escape sequence")
            self.clear()
            self.append(ch)
            return chr(0)
            
        if len(self.buf) > 0:   # an escape sequence has been detected

            if ch.isalpha(): # end of escape message
                self.append(ch)
                print("EscapeDecoder: End of escape message, len=", self.len())
                str = self.getSequence()
                self.clear()
                return str
            else:
                self.append(ch)
                return chr(0)
                            
            
            if len(self.buf) > 10:
                print("EscapeDecoder: oversize, len=", self.len())
                self.clear()
                return chr(0)
        
        return ch    



def main() -> None:
    print(f"{Esc.BLACK}Black{Esc.END}")
    print(f"{Esc.RED}Red{Esc.END}")
    print(f"{Esc.GREEN}Green{Esc.END}")
    print(f"{Esc.YELLOW}Yellow{Esc.END}")
    print(f"{Esc.BLUE}Blue{Esc.END}")
    print(f"{Esc.MAGENTA}Magenta{Esc.END}")
    print(f"{Esc.CYAN}Cyan{Esc.END}")
    print(f"{Esc.GRAY}Gray{Esc.END}")
    print(f"{Esc.WHITE}White{Esc.END}")
    
    print(f"{Esc.DARKGRAY}Dark Gray{Esc.END}")
    print(f"{Esc.BR_RED}Bright Red{Esc.END}")
    print(f"{Esc.BR_GREEN}Bright Green{Esc.END}")
    print(f"{Esc.BR_YELLOW}Bright Yellow{Esc.END}")
    print(f"{Esc.BR_BLUE}Bright Blue{Esc.END}")
    print(f"{Esc.BR_MAGENTA}Bright Magenta{Esc.END}")
    print(f"{Esc.BR_CYAN}Bright Cyan{Esc.END}")


if __name__ == "__main__":
    main()