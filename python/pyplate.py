#! /usr/bin/env python
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# C/C++ template generator
#
# File:   ctemplate.py
# Author: Peter Malmberg <peter.malmberg@gmail.com>
# Date:   2016-02-19
# Version: 0.2
# Python:  >=3
# Licence: MIT
# 
# -----------------------------------------------------------------------
#

# Imports -------------------------------------------------------------------

import logging
import argparse
from datetime import datetime, date, time


# Settings ------------------------------------------------------------------

AppName     = "PyQtTest"
AppVersion  = "0.1"
AppLicence  = "MIT"
AppAuthor   = "Peter Malmberg <peter.malmnerg@gmail.com>"


# Code ----------------------------------------------------------------------

def main():
    logging.basicConfig(level=logging.DEBUG)

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
        
    if args.newcpp:
        print("To be implemented.")
        exit
    



if __name__ == "__main__":
    main()
    
    
