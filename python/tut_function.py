#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# enumeration tutorial
#
# File:     tut_function
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      _
# Date:     2025-01-30
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------


def not_implemented() -> None:
    raise NotImplementedError("To do in future!")


def multi_arguments(*ints: int) -> None:
    for x in ints:
        print(f"Argument: {x}")


def main() -> None:
    multi_arguments(1, 2, 3, 4)
    not_implemented()


if __name__ == "__main__":
    main()
