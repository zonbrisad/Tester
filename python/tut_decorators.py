#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# tutorial for decorators
#
# File:     tut_decorators.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-09-12
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

# References:
# https://vegibit.com/how-to-create-custom-decorators-in-python/

from functools import wraps


def my_decorator(func):
    """An example decorator implementation"""

    @wraps(func)
    def wrapper(*args, **kwargs):
        print("Before...")
        result = func(*args, **kwargs)
        print("After...")
        return result

    return wrapper


def repeat_decorator(repeat):
    """An example of a decorator taking an argument"""

    def repeat_decorator(func):
        def wrapper(*args, **kwargs):
            for r in range(repeat):
                func(*args, **kwargs)
            return

        return wrapper

    return repeat_decorator


class class_decorator:
    def __init__(self):
        self.count = 0

    def __call__(self, func):
        def wrapper(*args, **kwargs):
            func(*args, **kwargs)
            self.count += 1
            print(f"Count: {self.count}")

        return wrapper


count_decorator = class_decorator()


@my_decorator
def my_func(s: str):
    print(f"How dare you, {s}")
    return "Ha Ha"


@repeat_decorator(repeat=3)
def my_print(s: str):
    print(s)


@count_decorator
def my_tjohej():
    print("Tjohej!")


r = my_func("Nisse")
print(f"Result: {r}")

my_print("Kalle")

my_tjohej()
my_tjohej()


# print(my_func.__name__)
# print(my_print.__name__)
