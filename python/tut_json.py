#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# json testing
#
# File:     tut_json.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2022-08-22
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# Imports --------------------------------------------------------------------


import traceback
import os
import sys
import json

# Variables ------------------------------------------------------------------

# Absolute path to script itself
self_dir = os.path.abspath(os.path.dirname(sys.argv[0]))

jn = """
{   
    "var1": true,


}
"""

dict = {
    "alias": "default",
    "port": "",
    "bitrate": 9600,
    "bits": 8,
    "stopbit": "",
    "parity": "None"
}


# Code -----------------------------------------------------------------------

with open(f"{self_dir}/tut_json.json", "w") as outfile:
    json.dump(dict, outfile, indent=4)


with open(f"{self_dir}/tut_json.json", "r") as infile:
    ldict = json.load(infile)

print(ldict)