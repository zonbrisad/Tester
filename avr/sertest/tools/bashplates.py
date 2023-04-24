#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# libarary for interacting with bashplates.
#
# File:     bashplates.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      
# Date:     2022-07-10
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------

from __future__ import annotations
import readline
import os
import shutil
import sys
import atexit
from enum import Enum
from escape import Esc

# Variables ------------------------------------------------------------------


# Code -----------------------------------------------------------------------
class BpEsc():
    @staticmethod
    def fg_8bit_color(c :int) -> str:
        return f"\x1b[38;5;{c}m"

    @staticmethod
    def bg_8bit_color(c :int) -> str:
        return f"\x1b[48;5;{c}m"
    

class Bp():
    """ ANSI foreground colors codes """
    E_BLACK = "\x1b[0;30m"        # Black
    E_RED = "\x1b[0;31m"          # Red
    E_GREEN = '\x1b[0;32m'        # Green
    E_YELLOW = '\x1b[0;33m'       # Yellow
    E_BLUE = '\x1b[0;34m'         # Blue
    E_MAGENTA = '\x1b[0;35m'      # Magenta
    E_CYAN = '\x1b[0;36m'         # Cyan
    E_WHITE = '\x1b[0;37m'        # Gray
    E_DARKGRAY = '\x1b[1;30m'     # Dark Gray
    E_BR_RED = '\x1b[1;31m'       # Bright Red
    E_BR_GREEN = '\x1b[1;32m'     # Bright Green
    E_BR_YELLOW = '\x1b[1;33m'    # Bright Yellow
    E_BR_BLUE = '\x1b[1;34m'      # Bright Blue
    E_BR_MAGENTA = '\x1b[1;35m'   # Bright Magenta
    E_BR_CYAN = '\x1b[1;36m'      # Bright Cyan
    E_BR_WHITE = '\x1b[1;37m'     # White

    # ANSI background color codes
    #
    E_BG_BLACK = '\x1b[40m'       # Black
    E_BG_RED = '\x1b[41m'         # Red
    E_BG_GREEN = '\x1b[42m'       # Green
    E_BG_YELLOW = '\x1b[43m'      # Yellow
    E_BG_BLUE = '\x1b[44m'        # Blue
    E_BG_MAGENTA = '\x1b[45m'     # Magenta
    E_BG_CYAN = '\x1b[46m'        # Cyan
    E_BG_WHITE = '\x1b[47m'       # White

    # ANSI Text attributes
    E_NORMAL = "\x1b[0m"       # Reset attributes
    E_BOLD = "\x1b[1m"         # bold font
    E_LOWINTENSITY = "\x1b[2m" # Low intensity/faint/dim
    E_ITALIC = "\x1b[3m"       # Low intensity/faint/dim
    E_UNDERLINE = "\x1b[4m"    # Underline
    E_SLOWBLINK = "\x1b[5m"    # Slow blink
    E_FASTBLINK = "\x1b[6m"    # Fast blink
    E_REVERSE = "\x1b[7m"      # Reverse video
    E_CROSSED = "\x1b[9m"      # Crossed text
    E_FRACTUR = "\x1b[20m"     # Gothic
    E_FRAMED = "\x1b[51m"      # Framed 
    E_OVERLINED = "\x1b[53m"   # Overlined 
    E_SUPERSCRIPT = "\x1b[73m" # Superscript
    E_SUBSCRIPT = "\x1b[74m"   # Subscript
    
    E_RESET = "\x1b[m"
     
    C_QUERY : str = BpEsc.fg_8bit_color(194)
    C_QUERY_DEF : str = BpEsc.fg_8bit_color(240)
    C_EMPHASIS : str = BpEsc.fg_8bit_color(255)
    C_DEEMPHASIS : str = BpEsc.fg_8bit_color(250)
    

    @staticmethod
    def name() -> str:
        return os.getenv('BP_NAME', "")

    @staticmethod
    def email() -> str:
        return os.getenv('BP_EMAIL', "")

    @staticmethod
    def license() -> str:
        return os.getenv('BP_LICENSE', "")

    @staticmethod
    def organisation() -> str:
        return os.getenv('BP_ORG', "")

    @staticmethod
    def msg(msg: str):
        print(msg)

    @staticmethod
    def msg_ok(msg: str):
        Bp.msg(f"[Ok] {msg}")

    @staticmethod
    def msg_error(msg: str):
        Bp.msg(f"[Error] {msg}")

    @staticmethod
    def mkdir(dir: str) -> bool:
        os.mkdir(dir)
        if os.path.exists(dir):
            Bp.msg_ok(f"Created dir {dir}.")
            return True
        else:
            Bp.msg_error(f"Failed to create dir {dir}.")
            return True

    @staticmethod
    def cp(src: str, dst: str):
        shutil.copyfile(src, dst)
        Bp.msg_ok(f"Copied file to {dst}.")


    @staticmethod
    def read_string(question: str, default=None) -> str:
        """Retrieve string input from user

        Args:
            question (str): Question string
            default (str, optional): Return value if pressing enter.
            Defaults to None.

        Returns:
            str: User answer
        """

        #histfile = os.path.join(os.path.expanduser("~"), ".python_history")
        # try:
        #     readline.read_history_file(histfile)
        #     readline.set_history_length(20)
        #     readline.clear_history()
        # except FileNotFoundError:
        #     pass
        # atexit.register(readline.write_history_file, histfile)
             
        while True:
            if default is None:
                s = ""
            else:
                s = default
            #sys.stdout.write(question + f"[{s}]>")
            choice = input(f"{Bp.C_QUERY}{question}{Bp.E_RESET} {Bp.C_QUERY_DEF}[{Bp.E_RESET}{s}{Bp.C_QUERY_DEF}]{Bp.E_RESET} > ")
            #choice = sys.stdin.readline()

            # if choice.isalnum():
            #    return choice

            if choice == "" and default is not None:
                return default
            else:
                return choice

    @staticmethod
    def read_integer(question: str, default=None, min=None, max=None) -> int:
        if default is not None:
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}{default}{Bp.C_QUERY_DEF}]{Bp.E_RESET}"
        elif min is None and max is None:
            prompt = ""
        elif isinstance(min, int) and max is None:
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}{min}-{Bp.C_QUERY_DEF}]{Bp.E_RESET}"
        elif min is None and isinstance(max, int):
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}-{max}{Bp.C_QUERY_DEF}]{Bp.E_RESET}"
        elif isinstance(min, int) and isinstance(max, int):
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}{min}-{max}{Bp.C_QUERY_DEF}]{Bp.E_RESET}"

        while True:
            choice = "aa"
            while True:
                choice = input(f"{Bp.C_QUERY}{question}{Bp.E_RESET} {prompt} > ")
                if choice.isnumeric():
                    val = int(choice)
                    break
                if choice == "" and isinstance(default, int):
                    val = default
                    break
            a = True
            b = True

            if min is not None and (val < min):
                a = False

            if max is not None and (val > max):
                b = False

            if a and b:
                return val

            if default is not None:
                return default

    @staticmethod
    def read_bool(question: str, default=None) -> bool:
        valid_true = ["yes", "y", "ye"]
        valid_false = ["no", "n"]

        if default is None:
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}y/n{Bp.C_QUERY_DEF}]{Bp.E_RESET}"
        elif default is True:
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}Y/n{Bp.C_QUERY_DEF}]{Bp.E_RESET}"
        elif default is False:
            prompt = f"{Bp.C_QUERY_DEF}[{Bp.E_RESET}y/N{Bp.C_QUERY_DEF}]{Bp.E_RESET}"
        else:
            raise ValueError(f"invalid default answer: {default}" )

        while True:
            #sys.stdout.write(f"{question} {prompt}")
            #choice = input().lower()
            choice = input(f"{Bp.C_QUERY}{question}{Bp.E_RESET} {prompt} > ")

            if choice == "" and default is not None:
                return default

            if choice in valid_true:
                return True

            if choice in valid_false:
                return False

            sys.stdout.write(
                    "Please respond with 'yes' or 'no' (or 'y' or 'n').\n")
    


def main() -> None:
    print(f"Name: {Bp.name()}")
    print(f"Name: {Bp.email()}")
    print(f"Name: {Bp.organisation()}")
    print(f"Name: {Bp.license()}")

    Bp.read_string("String question text", "default")        
    Bp.read_bool("Bool question text", True)        
    Bp.read_bool("Bool question text", False)        
    Bp.read_integer("Integer question text")
    Bp.read_integer("Integer question text", 42)
    #Bp.read_integer("Integer question text", 23, 10, 43)
    Bp.read_integer("Integer question text", None, 10, 43)


if __name__ == "__main__":
    main()
