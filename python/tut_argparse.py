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

    parser.add_argument("--version",
                        action="version",
                        help="Print version information",
                        version=f"{app_name} {app_version}")

    # Some examples of parameters (rename or remove unwanted parameters)
    parser.add_argument("-s", "--storetrue",
                        action="store_true",
                        help="Boolean type argument")
    parser.add_argument("--string",
                        action="store",
                        type=str,
                        help="String type argument",
                        default="HejHopp")
    parser.add_argument('-i, --integer',
                        action="store",
                        type=int,
                        help="Integer type argument with default value",
                        default=42)
    parser.add_argument("-l", "--list",
                        action="append",
                        type=int,
                        help="Append values to list",
                        dest='dlist',
                        default=[])
    parser.add_argument("-e",
                        action="store",
                        type=int,
                        help="Integer type argument, no default")
    parser.add_argument("--choice",
                        choices=['aa', 'bb', 'cc'],
                        help="String choices argument")
    parser.add_argument("--range",
                        type=int,
                        choices=range(1, 10),
                        help="Integer choices argument")
    parser.add_argument("-a", "--append",
                        action="append",
                        type=str,
                        help="Append string to list",
                        dest='astring',
                        default=[])

    # Parse arguments

    args = parser.parse_args()
    print(args)
    if hasattr(args, "string"):
        print(f"String argument: {args.string}")
        return

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
