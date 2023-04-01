#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# -----------------------------------------------------------------------
# 
# 
#
# File:    a.py
# Author:  
# Date:    2017-07-07
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
from datetime import datetime, date, time

# Settings ------------------------------------------------------------------


# Code ----------------------------------------------------------------------

class nisse():
    a=1
    b=2
    n="Kalle"
    m="Blaha"
    @staticmethod
    def x():
        print(nisse.m)
    

d={'A':42, 'B':12, 'C':-43 }
    
def main():
    print("Pyplate basic template.")
    print(nisse.a)
    print(nisse.n)
    nisse.x()
    
    print(d)
    for x,y in d.items():
        print(x,"  ", y)

    for x in d:
        print("Item: ",x)
        
    sys.exit(0);


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
                
