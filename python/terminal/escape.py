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

import logging
from enum import Enum

class TerminalState:
    def __init__(self) -> None:
        self.color = ""
        self.bg_color = ""
        self.cur_x = ""
        self.cur_y = ""
        self.bold = False
        self.dim = False
        self.italic = False
        self.underline = False

class Ascii:
    NULL = "\0"
    BEL = "\a"
    BS = "\b"
    TAB = "\t"
    NL = "\n"
    VT = "\v"
    FF = "\f"
    CR = "\r"
    ESC = "\e" 

    nls = ["\n", "\r\n", "\r"]
    @staticmethod
    def is_newline(s: str) -> bool:
        if s in Ascii.nls:
            return True
        return False

ascii = {  0x00:"NULL",
           0x01:"SOH",
           0x02:"STX",
           0x03:"ETX",
           0x04:"EOT",
           0x05:"ENQ",
           0x06:"ACK",
           0x07:"BEL",
           0x08:"BS",
           0x09:"TAB", # Horizontal tab
           0x0A:"LF",  # Line feed
           0x0B:"VT",  # Vertical tab
           0x0C:"FF",  # Form feed
           0x0D:"CR",  # Carriage return
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
           0x1B:"ESC", # Escape
           0x1C:"FS",
           0x1D:"GS",
           0x1E:"RS",
           0x1F:"US"
}

def getc(c: str) -> str:
    for a, b in ascii.items():
        if ord(c) == a:
            return b
    return c

# class CType(Enum):
#     NONE = 0
#     CHARACTER = 1
#     ESC_CSI = 2


class Esc:
    ESCAPE = "\x1b"

    """ ANSI foreground colors codes """
    BLACK = "\x1b[0;30m"        # Black
    RED = "\x1b[0;31m"          # Red
    GREEN = '\x1b[0;32m'        # Green
    YELLOW = '\x1b[0;33m'       # Yellow
    BLUE = '\x1b[0;34m'         # Blue
    MAGENTA = '\x1b[0;35m'      # Magenta
    CYAN = '\x1b[0;36m'         # Cyan
    GRAY = '\x1b[0;37m'         # Gray
    DARKGRAY = '\x1b[1;30m'     # Dark Gray
    BR_RED = '\x1b[1;31m'       # Bright Red
    BR_GREEN = '\x1b[1;32m'     # Bright Green
    BR_YELLOW = '\x1b[1;33m'    # Bright Yellow
    BR_BLUE = '\x1b[1;34m'      # Bright Blue
    BR_MAGENTA = '\x1b[1;35m'   # Bright Magenta
    BR_CYAN = '\x1b[1;36m'      # Bright Cyan
    WHITE = '\x1b[1;37m'        # White

    # ANSI background color codes
    #
    ON_BLACK = '\x1b[40m'       # Black
    ON_RED = '\x1b[41m'         # Red
    ON_GREEN = '\x1b[42m'       # Green
    ON_YELLOW = '\x1b[43m'      # Yellow
    ON_BLUE = '\x1b[44m'        # Blue
    ON_MAGENTA = '\x1b[45m'     # Magenta
    ON_CYAN = '\x1b[46m'        # Cyan
    ON_WHITE = '\x1b[47m'       # White

    # ANSI Text attributes
    ATTR_NORMAL = "\x1b[0m"       # Reset attributes
    ATTR_BOLD = "\x1b[1m"         # bold font
    ATTR_LOWINTENSITY = "\x1b[2m" # Low intensity/faint/dim
    ATTR_ITALIC = "\x1b[3m"       # Low intensity/faint/dim
    ATTR_UNDERLINE = "\x1b[4m"    # Underline
    ATTR_SLOWBLINK = "\x1b[5m"    # Slow blink
    ATTR_FASTBLINK = "\x1b[6m"    # Fast blink
    ATTR_REVERSE = "\x1b[7m"      # Reverse video
    ATTR_FRACTUR = "\x1b[20m"     # Gothic
    ATTR_FRAMED = "\x1b[51m"      # Framed 
    ATTR_OVERLINED = "\x1b[53m"   # Overlined
    ATTR_SUPERSCRIPT = "\x1b[73m" # Superscript
    ATTR_SUBSCRIPT = "\x1b[74m"   # Subscript
    

    END = "\x1b[0m"
    CLEAR = "\x1b[2J"
    RESET = "\x1bc"
    
    WONR = "\x1b[1;47\x1b[1;31m"

    # ANSI cursor operations
    #
    RETURN = "\x1b[F"           # Move cursor to begining of line
    UP = "\x1b[A"               # Move cursor one line up
    DOWN = "\x1b[B"             # Move cursor one line down
    FORWARD = "\x1b[C"          # Move cursor forward
    BACK = "\x1b[D"             # Move cursor backward
    HIDE = "\x1b[?25l"          # Hide cursor
    END = "\x1b[m"              # Clear Attributes

    # ANSI movement codes 
    CUR_RETURN = '\x1b[;0F'     # cursor return
    CUR_UP = '\x1b[;0A'         # cursor up
    CUR_DOWN = '\x1b[;0B'       # cursor down
    CUR_FORWARD = '\x1b[;0C'    # cursor forward
    CUR_BACK = '\x1b[;0D'       # cursor back
    CUR_HIDE = '\x1b[?25l'      # hide cursor
    CUR_SHOW = '\x1b[?25h'      # show cursor
    
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

    @staticmethod
    def is_escape_seq(s: str) -> bool:
        if s == Esc.ESCAPE:
            return True
        else:
            return False


FLAG_BLUE="\x1b[48;5;20m"
FLAG_YELLOW="\x1b[48;5;226m"

flag = f"""
{FLAG_BLUE}     {FLAG_YELLOW}  {FLAG_BLUE}          {Esc.END}
{FLAG_BLUE}     {FLAG_YELLOW}  {FLAG_BLUE}          {Esc.END}
{FLAG_YELLOW}                 {Esc.END}
{FLAG_BLUE}     {FLAG_YELLOW}  {FLAG_BLUE}          {Esc.END}
{FLAG_BLUE}     {FLAG_YELLOW}  {FLAG_BLUE}          {Esc.END}
"""
      
class EscapeDecoder():
    nls = ["\n", "\c", "\e"]
    
    def __init__(self):
        self.idx = 0
        self.clear()
        self.seq = False
        
    def clear(self):
        self.buf = ""
   
    def append(self, ch):
        self.buf += ch 
        #self.buf.append(ch)

    def append_string(self, s:str) -> None:
        self.buf += s

    def append_bytearray(self, ba: bytearray) -> None:
        self.buf += ba.decode("utf-8")

    def len(self):
        return len(self.buf)

    def is_nls(self, s) -> bool:
        if s in self.nls:
            return True
        return False

    def __iter__(self):
        return self 

    def __next__(self):
        if len(self.buf) == 0:
            raise StopIteration

        j = 0
        # handle escape and newline sequence
        if self.is_nls(self.buf[0]):

            if self.buf[0]==Esc.ESCAPE:
                while j<len(self.buf) and not self.buf[j].isalpha():
                    j += 1
    
                res = self.buf[0:j+1]
                self.buf = self.buf[j+1:]
                return res

            #if self.buf[0]=="\n" or self.buf[0]=="\c":     
        
        # handle text sequence
        # if self.buf[0] != Esc.ESCAPE:
        if not self.is_nls(self.buf[0]):
            # while (j<len(self.buf) and self.buf[j] != Esc.ESCAPE):
            while (j<len(self.buf) and not self.is_nls(self.buf[j])):
                j += 1
        
            res = self.buf[0:j]
            self.buf = self.buf[j:]
            return res

        # handle escape sequence
        # while j<len(self.buf) and not self.buf[j].isalpha():
        #     j += 1
        # res = self.buf[0:j+1]
        # self.buf = self.buf[j+1:]
        #return res    
    

def attributes():
    print(f"{Esc.ATTR_NORMAL}Normal text{Esc.END}")
    print(f"{Esc.ATTR_BOLD}Bold text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_LOWINTENSITY}Dim text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_ITALIC}Italic text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_UNDERLINE}Underline text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_SLOWBLINK}Slow blinking text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_FASTBLINK}Fast blinking text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_FRAMED}Framed text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_SUBSCRIPT}Subscript text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_SUPERSCRIPT}Superscript text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_FRACTUR}Fractur/Gorhic text{Esc.ATTR_NORMAL}")
    print(f"{Esc.ATTR_OVERLINED}Overlined text{Esc.ATTR_NORMAL}")


def main() -> None:
    logging.basicConfig(format="[%(levelname)s] Line: %(lineno)d %(message)s", level=logging.DEBUG)
    attributes()

    dec = EscapeDecoder()
    dec.append_string(f"Normal color {Esc.RED}Red color {Esc.END}More normal color {Esc.BLUE}Blue angels {Esc.END}White end")
    for x in dec:
        print(x)

    return
    
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

    print(flag)

if __name__ == "__main__":
    main()
