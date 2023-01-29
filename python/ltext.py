#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# large text library.
#
# File:     ltext.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2022-07-07
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------


from dataclasses import dataclass
import traceback
import os
import sys

# Variables ------------------------------------------------------------------



# Code -----------------------------------------------------------------------

@dataclass
class LLetter:
    letter: str = ""
    rows: int = 0
    row1: str = ""
    row2: str = ""
    row3: str = ""
    row4: str = ""
    row5: str = ""
    row6: str = ""
    row7: str = ""
    row8: str = ""
    row9: str = ""

# Banner3
x1 = LLetter(
    letter="1",
    row1="     ##  ",
    row2="   ####  ",     
    row3="     ##  ",
    row4="     ##  ",
    row5="     ##  ",
    row6="     ##  ",    
    row7="   ######"  
)
x2 = LLetter(
    letter="2",
    row1="  ####### ", 
    row2=" ##     ##",
    row3="        ##",
    row4="  ####### ",
    row5=" ##       ",
    row6=" ##       ",
    row7=" #########" 
)
xd = LLetter(
    letter=".",
    row1="     ",
    row2="     ",
    row3="     ",
    row4="     ",
    row5="     ",
    row6=" ### ",
    row7=" ### "
)
x3 = LLetter(
    letter="3",
    row1="  ####### ",
    row2=" ##     ##",
    row3="        ##",
    row4="  ####### ",
    row5="        ##",
    row6=" ##     ##",
    row7="  ####### "
)

class LFont:
    name: str = ""
    height: int = 0
    
    



def main() -> None:
    pass

if __name__ == "__main__":
    main()
