#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
# Python Tutorial and test project
# ----------------------------------------------------------------------------
#
# examples of comprehensions
#
# File:     tut_comprehensions.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Date:     2022-06-26
# License:  
#
# ----------------------------------------------------------------------------

# initiate list
l = [i for i in range(20)]
print(l)

# initiate list with condition
l = [i for i in range(20) if i % 2 == 0]
print(l)

# initiate list with zeroes
l = [0 for _ in range(10)]
print(l)

# initiate nested list with values
l = [[i for _ in range(4)] for i in range(5)]
print(l)


# initiate dictionary
d = {i: i*i  for i in range(10)}
print(d)

