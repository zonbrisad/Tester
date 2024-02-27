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

l1 = []
l2 = [4, 5]
print(f"Empty list:             {l1}")

l1.append(1)
print(f"Appending item to list: {l1}")

l1 += [2, 3]
print(f"Joining lists:          {l1}")

print(f"Length of list:         {len(l1)}")

l1.pop(1)
print(f"Remove item from list:  {l1}")

l1 = l1 + l2
print(f"Joining l2 to l1:       {l1}")


print(f"Reversing l1:           {l1[::-1]}")

print(f"First char:             {l1[0]}")
print(f"Last char:              {l1[-1]}")

print(f"First 3 characters:     {l1[0:3]}")
print(f"Last 2 characters:      {l1[-2:]}")


print("Enumerate list")
for i, val in enumerate(l1):
    print(f"index {i} value {val}")
