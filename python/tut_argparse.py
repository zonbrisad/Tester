#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
# Python Tutorial and test project
# ----------------------------------------------------------------------------
#
# argparse tutorial
#
# File:     tut_argparse.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Date:     2022-06-25
# License:  
#
# ----------------------------------------------------------------------------


# Imports --------------------------------------------------------------------

import argparse
import traceback
import os
import sys

# Variables ------------------------------------------------------------------

app_name = "tut_argparse.py"
app_version = "0.1"
app_license = "X"
app_author = "Peter Malmberg  <peter.malmberg@gmail.com>"
app_description = "argparse tutorial"

# Code -----------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        prog=app_name,
        description=app_description,
        epilog="",
        add_help=True)
    parser.add_argument("--name",
                        type=str,
                        help="Name of Python module",
                        default="")
    parser.add_argument("--brief",
                        type=str,
                        help="Brief description",
                        default="")
    parser.add_argument("--main",
                        action="store_true",
                        help="Add main function block",
                        default=False)
    parser.add_argument("--header",
                        action="store_true",
                        help="Include header",
                        default=False)
    parser.add_argument("--version",
                        action="version",
                        help="Print version information",
                        version=f"{app_name} {app_version}")


    args = parser.parse_args()
    parser.print_help()


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
