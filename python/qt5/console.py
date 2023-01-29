#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# test of pyqtconsole
#
# File:     console.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2022-07-14
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------


import argparse
import traceback
import os
import sys

# Variables ------------------------------------------------------------------

app_name = "test_signal.py"
app_version = "0.01"
app_license = ""
app_author = "Peter Malmberg  <peter.malmberg@gmail.com>"
app_org = "__ORGANISATION__"
app_description = "Test of how to receive linux signals."

# Code -----------------------------------------------------------------------


from threading import Thread
from PyQt5.QtWidgets import QApplication

from pyqtconsole.console import PythonConsole

app = QApplication([])
console = PythonConsole()
console.show()
console.eval_in_thread()

sys.exit(app.exec_())

def main() -> None:
    parser = argparse.ArgumentParser(
        prog=app_name,
        description=app_description,
        epilog="",
        add_help=True)
    parser.add_argument("--debug", action="store_true", default=False,
                        help="Print debug messages")
    parser.add_argument("--version", action="version",
                        version=f"{app_name} {app_version}",
                        help="Print version information")
    args = parser.parse_args()
    # parser.print_help()


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
