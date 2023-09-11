#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
# Python Tutorial and test project
# ----------------------------------------------------------------------------
#
# tutorial of python lists.
#
# File:     tut_lists.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Date:     2022-06-26
# License:
#
# ----------------------------------------------------------------------------

l = []
print(f"Empty list:             {l}")

l.append(1)
print(f"Appending item to list: {l}")

l += [2, 3]
print(f"Joining lists:          {l}")

print(f"Length of list:         {len(l)}")

l.pop(1)
print(f"Remove item from list:  {l}")


print("Enumerate list")
for i, val in enumerate(l):
    print(f"index {i} value {val}")
