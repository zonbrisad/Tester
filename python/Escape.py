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

class Esc():
    # ANSI foreground colors codes
    #
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

    # ANSI cursor operations
    #
    RETURN = '\033[F'           # Move cursor to begining of line
    UP = '\033[A'               # Move cursor one line up
    DOWN = '\033[B'             # Move cursor one line down
    FORWARD = '\033[C'          # Move cursor forward
    BACK = '\033[D'             # Move cursor backward
    HIDE = '\033[?25l'          # Hide cursor
    END = '\033[m'              # Clear Attributes

