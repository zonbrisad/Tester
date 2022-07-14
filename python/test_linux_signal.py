#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# test of linux signals
#
# File:     test_linux_signal.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2022-07-13
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------


import argparse
import traceback
import os
import sys
import time
import signal

# Variables ------------------------------------------------------------------


app_name = "test_linux_signal.py"
app_version = "0.01"
app_license = ""
app_author = "Peter Malmberg  <peter.malmberg@gmail.com>"
app_org = "__ORGANISATION__"
app_description = "test of linux signals"

# Code -----------------------------------------------------------------------

def handler(signum, frame):
    print("Signal usr1 received")





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
    parser.add_argument("--signal", action="store_true", default=False,
                        help="Send usr1 signal to process")
    args = parser.parse_args()
    # parser.pqrint_help()

    if args.signal:
        with os.popen("ps aux | grep test_linux_signal.py | grep -v -e 'grep' -e '--signal'") as f:
            res = f.readlines()

        pid = int(res[0].split()[1]) 
        os.kill(pid, 10)
        exit()
    

    signal.signal(signal.SIGUSR1, handler)

    print(f"Process pid = {os.getpid()}")
    while True:
        time.sleep(1)
        #print("Hello")
        
        
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
