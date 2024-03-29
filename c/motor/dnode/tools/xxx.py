#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# asdf asd safd
#
# File:    xxx.py
# Author:  
# Date:    2017-06-09
# License: 
# Python:  >=3
# 
# -----------------------------------------------------------------------
# This file is generated from pyplate Python template generator.
# Pyplate is developed by
# Peter Malmberg <peter.malmberg@gmail.com>
#

# Imports -------------------------------------------------------------------

import sys
import os
import traceback
import logging
import argparse
from datetime import datetime, date, time

# Settings ------------------------------------------------------------------

# Application settings
AppName     = "xxx"
AppVersion  = "0.1"
AppLicense  = ""
AppAuthor   = ""
AppDesc     = "asdf asd safd"

# Code ----------------------------------------------------------------------

def main():
    logging.basicConfig(level=logging.DEBUG)

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

    # Print options default
    parser.print_help()
    
#
#
def printInfo():
    print("Application name:   " + AppName    )
    print("Application Ver.:   " + AppVersion )
    print("Application desc.:  " + AppDesc    )
    print("File path:          " + scriptPath )
        

#
#
def query_list(question, db, default="yes"):
    prompt = " >"
    
    while 1:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        print(choice)
        for x in db:
            if (x.lower()==choice):
                return x
            
            print("\nPlease resplond with: ")
            for c in db:
                print("  "+c)
                

#
#
def query_yn(question, default="yes"):
    valid = {"yes": True, "y": True, "ye": True, "no": False, "n": False}
    if default is None:
        prompt = " [y/n] "
    elif default == "yes":
        prompt = " [Y/n] "
    elif default == "no":
        prompt = " [y/N] "
    else:
        raise ValueError("invalid default answer: '%s'" % default)
    
    while True:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        if default is not None and choice == '':
            return valid[default]
        elif choice in valid:
            return valid[choice]
        else:
            sys.stdout.write("Please respond with 'yes' or 'no' (or 'y' or 'n').\n")



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
                

