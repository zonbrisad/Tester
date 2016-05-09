#! /usr/bin/env python3
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

import os
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


def printInfo():
    print("Script name    " + AppName)
    print("Script version " + AppVersion)
    print("Script path    " +  os.path.realpath(__file__))

    
    
    
def main():
    logging.basicConfig(level=logging.DEBUG)

    printInfo()
    
    # options parsing
    parser = argparse.ArgumentParser(description="C/C++ template generator")
    parser.add_argument("--newc",    action="store_true", help="Create a new C and H file set")
    parser.add_argument("--newcpp",  action="store_true", help="Create a new C++ and H file set")
    parser.add_argument("--licence", type=str,            help="Licence of new file", default="")
    parser.add_argument("--author",  type=str,            help="Author of file",      default="")
    parser.add_argument("--dir",     type=str,            help="Directory where to store file",  default=".")
    
    args = parser.parse_args()
    
    if args.newc:
        newModule(args.dir, args.author, args.licence)
        exit
        


if __name__ == "__main__":
    main()
    
    
