#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
# Pyplate template generator
# ----------------------------------------------------------------------------
#
# a set of query functions
#
# File:     query.py
# Author:   Peter Malmberg   <peter.malmberg@gmail.com>
# Date:     2022-06-23
# License:
#
# ----------------------------------------------------------------------------

from __future__ import annotations

import sys
from enum import Enum



class Query:
    """A simple query class """
    def __init__(self, type: QueryType, query_string: str,
                 min=None, Max=None, default=None) -> None:
        self.value = None
        self.type = type
        self.query_string = query_string
        self.default = default

    def is_true(self):
        if self.type == QueryType.BOOL and self.value is True:
            return True
        else:
            return False

    def query(self):
        if self.type == QueryType.BOOL:
            self.value = self.read_bool(self.query_string, self.default)
        if self.type == QueryType.STRING:
            self.value = self.read_string(self.query_string, self.default)
        if self.type == QueryType.INTEGER:
            pass

    @staticmethod
    def read_string(question: str, default=None) -> str:
        """Retrieve string input from user

        Args:
            question (str): Question string
            default (str, optional): Return value if pressing enter.
            Defaults to None.

        Returns:
            str: User answer
        """
        while True:
            if default is None:
                s = ""
            else:
                s = default
            sys.stdout.write(question + f"[{s}]>")
            choice = input().lower()

            # if choice.isalnum():
            #    return choice

            if choice == "" and default is not None:
                return default
            else:
                return choice

    @staticmethod
    def read_integer(question: str, default=None, min=None, max=None) -> int:
        if default is not None:
            prompt = f"[{default}] > "
        elif min is None and max is None:
            prompt = "[] > "
        elif isinstance(min, int) and max is None:
            prompt = f"[{min}-] > "
        elif min is None and isinstance(max, int):
            prompt = f"[-{max}] > "
        elif isinstance(min, int) and isinstance(max, int):
            prompt = f"[{min}-{max}] > "

        while True:
            choice = "aa"
            while True:
                sys.stdout.write(f"{question} {prompt}")
                choice = input().lower()
                if choice.isnumeric():
                    break
                if choice == "":
                    break

            a = True
            b = True

            if min is not None and (int(choice) < min):
                a = False

            if max is not None and (int(choice) > max):
                b = False

            if a and b:
                return int(choice)

            if default is not None:
                return default

    @staticmethod
    def read_bool(question: str, default=None) -> bool:
        valid_true = ["yes", "y", "ye"]
        valid_false = ["no", "n"]

        if default is None:
            prompt = " [y/n] "
        elif default is True:
            prompt = " [Y/n] "
        elif default is False:
            prompt = " [y/N] "
        else:
            raise ValueError("invalid default answer: '%s'" % default)

        while True:
            sys.stdout.write(f"{question} {prompt}")
            choice = input().lower()

            if choice == "" and default is not None:
                return default

            if choice in valid_true:
                return True

            if choice in valid_false:
                return False

            sys.stdout.write(
                    "Please respond with 'yes' or 'no' (or 'y' or 'n').\n")

    @staticmethod
    def read_float(question: str, default=None) -> float:
        pass

    @staticmethod
    def read_list(question: str, list):
        pass


class QueryType(Enum):
    STRING = 1
    INTEGER = 2
    FLOAT = 3
    LIST = 4
    BOOL = 5



class QuerySequence:
    def __init__(self) -> None:
        self.querys = []

    def add_query(self, query: Query) -> Query:
        self.querys.append(query)
        return query

    def run(self):
        for q in self.querys:
            q.query()




def query_list(question: str, db, default="yes"):
    prompt = " >"

    # print(db)
    while 1:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        print(choice)
        for x in db:
            if (x.lower() == choice):
                return x

        print("\nPlease resplond with: ")
    for c in db:
        print("  "+c)




def main():
    # print(query_string("What string", "Nisse"))
    # print(query_string("What string", None))
    # print(query_string("What string"))
    # print(query_bool("Yes or no", "yes"))
    # print(query_bool("Yes or no", "no"))
    # print(query_bool("Yes or no", None))

    # print(query_int("How much?"))
    # print(query_int("How much?", 10))
    # print(query_int("How much?", None, 20))
    # print(query_int("How much?", 0, 100))

    # print(Query.read_bool("Static boolean query?", True))
    # print(Query.read_bool("Static boolean query?", False))
    # print(Query.read_bool("Static boolean query?"))

    # print(Query.read_string("Static string query?", default="Kalle"))
    # print(Query.read_integer("Static integer query"))
    print(Query.read_integer("Static integer query", min=10))
    print(Query.read_integer("Static integer query", max=20))
    print(Query.read_integer("Static integer query", default=42))

    qs = QuerySequence()
    qs.add_query(
        Query(QueryType.BOOL, "Do you want to answer more questions?"))
    qs.add_query(
        Query(QueryType.STRING, "Please enter string?"))
    qs.run()


if __name__ == "__main__":
    main()
