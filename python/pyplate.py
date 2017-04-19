#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# A Python script template
#
# File:    pyplate.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:    2016-02-19
# Version: 0.2
# Python:  >=3
# Licence: MIT
# 
# -----------------------------------------------------------------------
#

# Imports -------------------------------------------------------------------

import sys, os, traceback
import logging
import argparse
from datetime import datetime, date, time


# Settings ------------------------------------------------------------------

AppName     = "pyplate"
AppVersion  = "0.1"
AppLicence  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmnerg@gmail.com>"

# Uncomment to use logfile
#LogFile     = "pyplate.log"

# Code ----------------------------------------------------------------------


# ANSI foreground colors codes
#
E_BLACK='\e[0;30m'        # Black
E_RED='\e[0;31m'          # Red
E_GREEN='\e[0;32m'        # Green
E_YELLOW='\e[0;33m'       # Yellow
E_BLUE='\e[0;34m'         # Blue
E_MAGENTA='\e[0;35m'      # Magenta
E_CYAN='\e[0;36m'         # Cyan
E_GRAY='\e[0;37m'         # Gray
E_DARKGRAY='\e[1;30m'     # Dark Gray
E_BR_RED='\e[1;31m'       # Bright Red
E_BR_GREEN='\e[1;32m'     # Bright Green
E_BR_YELLOW='\e[1;33m'    # Bright Yellow
E_BR_BLUE='\e[1;34m'      # Bright Blue
E_BR_MAGENTA='\e[1;35m'   # Bright Magenta
E_BR_CYAN='\e[1;36m'      # Bright Cyan
E_WHITE='\e[1;37m'        # White

# ANSI background color codes
#
E_ON_BLACK='\e[40m'       # Black
E_ON_RED='\e[41m'         # Red
E_ON_GREEN='\e[42m'       # Green
E_ON_YELLOW='\e[43m'      # Yellow
E_ON_BLUE='\e[44m'        # Blue
E_ON_MAGENTA='\e[45m'     # Magenta
E_ON_CYAN='\e[46m'        # Cyan
E_ON_WHITE='\e[47m'       # White

# ANSI cursor operations
#
E_RETURN="\e[F"           # Move cursor to begining of line
E_UP="\e[A"               # Move cursor one line up
E_DOWN="\e[B"             # Move cursor one line down
E_FORWARD="\e[C"          # Move cursor forward
E_BACK="\e[D"             # Move cursor backward
E_HIDE="\e[?25l"          # Hide cursor
E_SHOW="\e[?25h"          # Show cursor

E_END="\e[m"              # Clear Attributes

# Message colors
E_INFO=E_BR_CYAN
E_WARNING=E_BR_YELLOW
E_ERROR=E_BR_RED
E_CRITICAL=E_ON_RED+E_WHITE



def printInfo():
    print("Script name    " + AppName)
    print("Script version " + AppVersion)
    print("Script path    " + os.path.realpath(__file__))

def colorTest():
    print(E_RED + "Red" + E_END)
    
    
def main():
    logging.basicConfig(level=logging.DEBUG)

    printInfo()
#    colorTest()
 
    # options parsing
    parser = argparse.ArgumentParser(description="C/C++ template generator")

    parser.add_argument("--helpx",     help="Print help informationt")
    parser.add_argument("--newcpp",  action="store_true", help="Create a new C++ and H file set")
    parser.add_argument("--licence", type=str,            help="Licence of new file", default="")
    parser.add_argument("--author",  type=str,            help="Author of file",      default="")
    parser.add_argument("--dir",     type=str,            help="Directory where to store file",  default=".")

    args = parser.parse_args()
    sys.exit(0)
    if args.newc:
        newModule(args.dir, args.author, args.licence)
        exit
        
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
                
    
    
