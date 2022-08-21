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

from dataclasses import dataclass
import subprocess
import enum
import logging
import os
from enum import Enum, auto


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
           0x1F:"US",
           0x20:"Space"
}

def getc(c: str) -> str:
    for a, b in ascii.items():
        if ord(c) == a:
            return b
    return c

def hex2str(c: int) -> str:
    for a, b in ascii.items():
        if c == a:
            return b
    return chr(c)


# class CType(Enum):
#     NONE = 0
#     CHARACTER = 1
#     ESC_CSI = 2



class Escape(Enum):
    BLACK = auto()
    RED = auto()
    GREEN = auto()
    YELLOW = auto()
    BLUE = auto()
    MAGENTA = auto()
    CYAN = auto()
    GRAY = auto()
    DARKGRAY = auto()
    BRIGHT_RED = auto()
    BRIGHT_GREEN = auto()
    BRIGHT_YELLOW = auto()
    BRIGHT_BLUE = auto()
    BRIGHT_MAGENTA = auto()
    BRIGHT_CYAN = auto()
    WHITE = auto()

    # ANSI background color codes
    #
    ON_BLACK = auto()
    ON_RED = auto()
    ON_GREEN = auto()
    ON_YELLOW = auto()
    ON_BLUE = auto()
    ON_MAGENTA = auto()
    ON_CYAN = auto()
    ON_WHITE = auto()

    # ANSI Text attributes
    ATTR_NORMAL = auto()
    ATTR_BOLD = auto()
    ATTR_LOWINTENSITY = auto()
    ATTR_ITALIC = auto()
    ATTR_UNDERLINE = auto()
    ATTR_SLOWBLINK = auto()
    ATTR_FASTBLINK = auto()
    ATTR_REVERSE = auto()
    ATTR_FRACTUR = auto()
    ATTR_FRAMED = auto()
    ATTR_OVERLINED = auto()
    ATTR_SUPERSCRIPT = auto()
    ATTR_SUBSCRIPT = auto()
    
    END = auto()
    CLEAR = auto()
    RESET = auto()
    
    WONR = auto()

    # ANSI cursor operations
    #
    RETURN = auto()
    UP = auto()
    DOWN = auto()
    FORWARD = auto()
    BACK = auto()
    HIDE = auto()
    SHOW = auto()
 


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


escape2html = {
    Escape.BLACK: [ Esc.BLACK, "black"],
    Escape.RED: [ Esc.RED, "red"],
    Escape.GREEN: [ Esc.GREEN, "green"],
    Escape.YELLOW: [ Esc.YELLOW, "yellow"],
    Escape.BLUE: [ Esc.BLUE, "blue"],
    Escape.MAGENTA: [ Esc.MAGENTA, "magenta"],
    Escape.CYAN: [ Esc.CYAN, "cyan"],
    Escape.GRAY: [ Esc.GRAY, "gray"],
    Escape.DARKGRAY: [ Esc.DARKGRAY, "darkgray"],
    Escape.BRIGHT_RED: [ Esc.BR_RED, "red"],
    Escape.BRIGHT_GREEN: [ Esc.BR_GREEN, "green"],
    Escape.BRIGHT_YELLOW: [ Esc.BR_YELLOW, "yellow"],
    Escape.BRIGHT_BLUE: [ Esc.BR_BLUE, "blue"],
    Escape.BRIGHT_MAGENTA: [ Esc.BR_MAGENTA, "magenta"],
    Escape.BRIGHT_CYAN: [ Esc.BR_CYAN, "cyan"],
    Escape.WHITE: [ Esc.WHITE, "white"],

    # ANSI background color codes
    #
    Escape.ON_BLACK: [ Esc.ON_BLACK, "black"],
    Escape.ON_RED: [ Esc.ON_RED, "red"],
    Escape.ON_GREEN: [ Esc.ON_GREEN, "green"],
    Escape.ON_YELLOW: [ Esc.ON_YELLOW, "yellow"],
    Escape.ON_BLUE: [ Esc.ON_BLUE, "blue"],
    Escape.ON_MAGENTA: [ Esc.ON_MAGENTA, "magenta"],
    Escape.ON_CYAN: [ Esc.ON_CYAN, "cyan"],
    Escape.ON_WHITE: [ Esc.ON_WHITE, "white"],

    # ANSI Text attributes
    Escape.ATTR_NORMAL: [ Esc.ATTR_NORMAL, "normal"],
    Escape.ATTR_BOLD: [ Esc.ATTR_BOLD, "bold"],
    Escape.ATTR_LOWINTENSITY: [ Esc.ATTR_LOWINTENSITY, ""],
    Escape.ATTR_ITALIC: [ Esc.ATTR_ITALIC, ""],
    Escape.ATTR_UNDERLINE: [ Esc.ATTR_UNDERLINE, ""],
    Escape.ATTR_SLOWBLINK: [ Esc.ATTR_SLOWBLINK, ""],
    Escape.ATTR_FASTBLINK: [ Esc.ATTR_FASTBLINK, ""],
    Escape.ATTR_REVERSE: [ Esc.ATTR_REVERSE, ""],
    Escape.ATTR_FRACTUR: [ Esc.ATTR_FRACTUR, ""],
    Escape.ATTR_FRAMED: [ Esc.ATTR_FRAMED, ""],
    Escape.ATTR_OVERLINED: [ Esc.ATTR_OVERLINED, ""],
    Escape.ATTR_SUPERSCRIPT: [ Esc.ATTR_SUPERSCRIPT, ""],
    Escape.ATTR_SUBSCRIPT: [ Esc.ATTR_SUBSCRIPT, ""],
    
    Escape.END: [ Esc.END, "" ]
    # Escape.CLEAR: [ Esc. ],
    # Escape.RESET: [ Esc. ],
    
    # Escape.WONR: [ Esc. ],

    # # ANSI cursor operations
    # #
    # Escape.RETURN: [ Esc. ],
    # Escape.UP: [ Esc. ],
    # Escape.DOWN: [ Esc. ],
    # Escape.FORWARD: [ Esc. ],
    # Escape.BACK: [ Esc. ],
    # Escape.HIDE: [ Esc. ],
    # Escape.SHOW: [ Esc. ],    

}


def e2h(s: str) -> Escape:
    if s[0] != Esc.ESCAPE:
        return None

    for x, y in escape2html.items():
        if y[0] == s:
            return x

    return None

def escape2string(s: str) -> str:
    if s[0] != Esc.ESCAPE:
        # return "Not escape sequence"
        return str

    for x, y in escape2html.items():
        if y[0] == s:
            return f"'\\x1b{s[1:]}' {x}"

    return f"'\\x1b{s[1:]}' Sequence not supported"

def esc2html(e: Escape) -> str:
    return escape2html[e][1]

@dataclass
class TerminalState:
    color:Escape = Escape.BLACK
    bg_color:Escape = Escape.ON_WHITE
    attribute:Escape = Escape.ATTR_NORMAL
    cur_x = None
    cur_y = None

    def update(self, es) -> None:
        #logging.debug(es)
        if es == Escape.END:
            self.color = Escape.BLACK
            self.bg_color = Escape.WHITE
            self.attribute = Escape.ATTR_NORMAL
            
        if es in [Escape.BLACK, Escape.RED, Escape.GREEN, Escape.YELLOW, Escape.BLUE,
                  Escape.MAGENTA, Escape.CYAN, Escape.GRAY, Escape.DARKGRAY, Escape.BRIGHT_RED,
                  Escape.BRIGHT_GREEN, Escape.BRIGHT_YELLOW, Escape.BRIGHT_BLUE, Escape.BRIGHT_MAGENTA,
                  Escape.BRIGHT_CYAN, Escape.WHITE]:
            self.color = es
        logging.debug(f"{self.color}")

    def state2html(self, s: str) -> str:
        #x = f"""<span style="color:{esc2html(self.color)};background-color:{};font-weight:{}">{s}</span>"""
        x = f"""<pre><span style="color:{esc2html(self.color)}">{s}</span></pre>"""
        logging.debug(x)
        return x

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
    nls = ["\n", "\x0d", "\x1b"]
    
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

    def next_char(self):
        pass

    def __iter__(self):
        self.i = 0
        return self 

    def __next__(self):
        l = len(self.buf)
        if l == 0:                # Buffer is empty, abort iteration
            raise StopIteration

        j = 0

        if self.buf[j] == Esc.ESCAPE:              # Escape sequence found
            while j<l and not self.buf[j].isalpha():
                j += 1
            if j == l:
                raise StopIteration
            # Complete Escape sequence
            if self.buf[j].isalpha():
                res = self.buf[0:j+1]
                self.buf = self.buf[j+1:]
                logging.debug(f"Found escape sequence: {escape2string(res)}")
                # logging.debug(f"Found escape sequence: {e2h(res)}")
                return res
            
            # Escape sequence not complete, abort iteration
            raise StopIteration
            
        if  self.buf[j] == Ascii.NL:
            logging.debug(f"Found newline:")
            res = self.buf[0:j+1]
            self.buf = self.buf[j+1:]
            return res
        
        if  self.buf[j] == Ascii.CR:
            logging.debug(f"Found carriage return:")
            res = self.buf[0:j+1]
            self.buf = self.buf[j+1:]
            return res

        # Handle normal text    
        #if self.buf[j] != Esc.ESCAPE: 
        while j<l and not self.is_nls(self.buf[j]):
           j += 1
        res = self.buf[0:j]
        self.buf = self.buf[j:]
        logging.debug(f"Found text sequence: '" + res.replace("\x1b", "\\x1b").replace("\x0a", "\\n").replace("\x0d", '\\c')+"'")
        return res


escape_attribute_test = f"""  
{Esc.ATTR_NORMAL}Normal text{Esc.END}
{Esc.ATTR_BOLD}Bold text{Esc.ATTR_NORMAL}
{Esc.ATTR_LOWINTENSITY}Dim text{Esc.ATTR_NORMAL}
{Esc.ATTR_ITALIC}Italic text{Esc.ATTR_NORMAL}
{Esc.ATTR_UNDERLINE}Underline text{Esc.ATTR_NORMAL}
{Esc.ATTR_SLOWBLINK}Slow blinking text{Esc.ATTR_NORMAL}
{Esc.ATTR_FASTBLINK}Fast blinking text{Esc.ATTR_NORMAL}
{Esc.ATTR_FRAMED}Framed text{Esc.ATTR_NORMAL}
{Esc.ATTR_SUBSCRIPT}Subscript text{Esc.ATTR_NORMAL}
{Esc.ATTR_SUPERSCRIPT}Superscript text{Esc.ATTR_NORMAL}
{Esc.ATTR_FRACTUR}Fractur/Gothic text{Esc.ATTR_NORMAL}
{Esc.ATTR_OVERLINED}Overlined text{Esc.ATTR_NORMAL}
{Esc.BLACK}Black{Esc.END}
{Esc.RED}Red{Esc.END}
{Esc.GREEN}Green{Esc.END}
{Esc.YELLOW}Yellow{Esc.END}
{Esc.BLUE}Blue{Esc.END}
{Esc.MAGENTA}Magenta{Esc.END}
{Esc.CYAN}Cyan{Esc.END}
{Esc.GRAY}Gray{Esc.END}
{Esc.WHITE}White{Esc.END}
{Esc.DARKGRAY}Dark Gray{Esc.END}
{Esc.BR_RED}Bright Red{Esc.END}
{Esc.BR_GREEN}Bright Green{Esc.END}
{Esc.BR_YELLOW}Bright Yellow{Esc.END}
{Esc.BR_BLUE}Bright Blue{Esc.END}
{Esc.BR_MAGENTA}Bright Magenta{Esc.END}
{Esc.BR_CYAN}Bright Cyan{Esc.END}
"""

incomplete_escape_sequence = f"""
{Esc.BR_MAGENTA}Some colored text{Esc.END}
{Esc.GREEN}Some more text with incomplete escape sequence \x1b["""

end_with_newline = "Some text with newline end\n"
    
def main() -> None:
    logging.basicConfig(format="[%(levelname)s] Line: %(lineno)d %(message)s", level=logging.DEBUG)
   
    print(escape_attribute_test)
    print(flag)

    dec = EscapeDecoder()
    dec.append_string(f"Normal color {Esc.RED}Red color {Esc.END}More normal color {Esc.BLUE}Blue angels {Esc.END}White end")
    for x in dec:
        print(f"{x}")
        
    dec2 = EscapeDecoder()
    dec2.append_string(escape_attribute_test)
    for x in dec2:
        pass
        #print(f"{x}")

    print(escape_attribute_test.replace("\x1b", "\\x1b").replace("\x0a", "\\n").replace("\x0d", '\\c'))

    res = subprocess.Popen(["pmg"], shell=False, stdout=subprocess.PIPE)
    out, err = res.communicate()
    dec3 = EscapeDecoder()
    dec3.append_bytearray(out)    
    #for x in dec3:
    #    pass
    
    dec4 = EscapeDecoder()
    dec4.append_string(incomplete_escape_sequence)
    for x in dec4:
        pass
    
    dec5 = EscapeDecoder()
    dec5.append_string(end_with_newline)
    for x in dec5:
        pass

if __name__ == "__main__":
    main()
