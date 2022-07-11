#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
# Python Tutorial and test project
# ----------------------------------------------------------------------------
#
# some dictionary basics.
#
# File:     tut_dictionary.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Date:     2022-06-26
# License:  
#
# ----------------------------------------------------------------------------

d = {"a": 1, "b": 2, "c": 3, "d": 4}
for key in d:
    print(f"{key} = {d[key]}")
    
print("\n")

for key, val in d.items():
    print(f"{key} = {val}")