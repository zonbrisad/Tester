#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# python template generator
#
# File:     tgenerator.py
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-03-23
# License:
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

import os
import argparse
from datetime import datetime
from typing import List
from query import Query
from bashplates import Bp
from templatec import *
from pathlib import Path


class TGenerator:
    """docstring for template."""

    name: str = ""
    author: str = ""
    description: str = ""
    date: str = ""
    email: str = ""
    license: str = ""
    org: str = ""
    project: str = ""
    out_dir: str = ""

    header_t: None
    main_t: None

    has_separators: bool = False

    filename_h: str = ""
    filename_c: str = ""

    struct_name: str = ""
    struct_prefix: str = ""
    struct_var: str = ""

    def __init__(
        self,
        args: argparse.ArgumentParser,
        header_t: TemplateC,
        main_t: TemplateC,
        pre: List[TemplateC],
        post: List[TemplateC],
    ):
        self.date = datetime.now().strftime("%Y-%m-%d")
        self.name = args.name
        self.description = args.description
        self.author = args.author
        self.email = args.email
        self.org = args.organization
        self.license = args.license
        self.out_dir = args.outdir

        self.has_separators = args.separators
        self.args = args

        self.header_t = None

        if header_t is None:
            # Load external project header if existing
            headerFile = "./.mpconf/header.txt"
            if os.path.isfile(headerFile):
                #       print("Header template exist")
                self.header_t = TemplateC()
                self.header_t.header_text = Path(headerFile).read_text()
            else:
                self.header_t = t_header
        else:
            self.header_t = header_t

        self.main_t = main_t

        self.filename_h = f"{self.name}.h"
        self.filename_c = f"{self.name}.c"

        self.templ = TemplateC()

        self.pre = pre
        self.post = post

    def has_main(self) -> bool:
        if self.main_t == None:
            return False
        return True

    def query_list(self, tlist):
        for t in tlist:
            if t.query is True:
                t.incl = Bp.read_bool(t.query_text, t.incl)

            if t.incl is True and t.sub:
                self.query_list(t.sub)

    def query(self) -> None:
        if self.args.no_interaction is False:
            self.set_attribute("name", "Enter C module name", self.name)
            self.set_attribute(
                "description", "Enter brief description", self.description
            )
            self.set_attribute("author", "Enter name of author", self.author)
            self.set_attribute("email", "Enter email of author", self.email)

        self.filename_c = f"{self.name}.c"
        self.filename_h = f"{self.name}.h"

        self.query_list(self.pre)

    #     # if external header, read into var
    #     if self.args.header is not None:
    #         self.header = TemplateC()
    #         with self.args.header as f:
    #             self.header.header_text = f.read()

    def set_attribute(self, attribute: str, question: str, default: str):
        # setattr(self, attribute, Query.read_string(question, default))
        setattr(self, attribute, Bp.read_string(question, default))

    def add(self, t: TemplateC) -> None:
        self.templ.add(t)
        pass

    def clear(self):
        self.text = ""

    def replace(self, old: str, new: str):
        if new == None:
            return
        self.text = self.text.replace(old, new)

    def add_separator(self, header):
        if self.has_separators:
            self.text += f"\n// {header} {'-'*(73-len(header))}\n\n"
        else:
            self.text += "\n"

    def replace_keys(self, filename: str):
        self.replace("__NAME__", self.name)
        self.replace("__DESCRIPTION__", self.description)
        self.replace("__AUTHOR__", self.author)

        if self.email == "":
            self.replace("__EMAIL__", "")
        else:
            self.replace("__EMAIL__", f"<{self.email}>")

        self.replace("__DATE__", self.date)
        self.replace("__LICENSE__", self.license)
        self.replace("__FILENAME__", filename)
        self.replace("__ORGANISATION__", self.org)
        self.replace("__FILE__", f"_{self.name.upper()}_H_")
        self.replace("__VERSION__", "0.01")
        self.replace("__STRUCT__", self.struct_name)
        self.replace("__PREFIX__", self.struct_prefix)
        self.replace("__VAR__", self.struct_var)

    def generate_h(self):
        self.clear()

        self.text += self.templ.header_text

        self.text += self.templ.h_pre_text

        self.add_separator("Include")
        self.text += self.templ.h_includes_text

        self.add_separator("Macros")
        self.text += self.templ.h_macros_text

        self.add_separator("Datatypes")
        self.text += self.templ.h_datatypes_text

        self.add_separator("Variables")
        self.text += self.templ.h_variables_text

        self.add_separator("Prototypes")
        self.text += self.templ.h_prototypes_text

        self.text += self.templ.h_post_text

        self.replace_keys(self.filename_h)

    def generate_c(self):
        self.clear()

        self.text += self.templ.header_text

        # self.text += self.c_pre_text

        self.add_separator("Include")
        self.text += self.templ.c_includes_text
        self.text += f'#include "{self.filename_h}"\n'

        self.add_separator("Macros")
        self.text += self.templ.c_macros_text

        self.add_separator("Prototypes")
        self.text += self.templ.c_prototypes_text

        self.add_separator("Datatypes")
        self.text += self.templ.c_datatypes_text

        self.add_separator("Variables")
        self.text += self.templ.c_variables_text

        self.add_separator("Code")
        self.text += self.templ.c_code_text

        self.text += self.templ.hw_init_begin_text
        self.text += self.templ.hw_init_vars_text
        self.text += self.templ.hw_init_code_text
        self.text += self.templ.hw_init_end_text

        # if self.has_main():
        #     self.text += self.main_t.main_begin_text

        if self.has_main():
            self.text += self.main_t.main_begin_text
            self.text += self.templ.main_vars_text
            self.text += self.templ.main_begin_text
            self.text += self.templ.main_func_text

            self.text += self.templ.main_loop_begin_text
            self.text += self.templ.main_loop_middle_text
            self.text += self.templ.main_loop_end_text

            self.text += self.templ.main_end_text
            self.text += self.main_t.main_end_text

        # if self.has_main():
        #     self.text += self.main_t.main_end_text

        # self.text += self.c_post_text

        self.replace_keys(self.filename_c)

    def generate_incl(self, tlist):
        for t in tlist:
            if t.incl:
                self.add(t)

            if t.incl is True:
                self.generate_incl(t.sub)

    def generate(self):
        if self.header_t is not None:
            self.add(self.header_t)

        # for t in self.pre:
        #     if t.incl:
        #         self.add(t)

        self.generate_incl(self.pre)
        # for x in self.post:
        #     self.add(x)

        self.generate_h()
        self.file_h = self.text
        self.generate_c()
        self.file_c = self.text

    def write(self, dir=None) -> str:
        self._write(self.file_h, self.filename_h, None)
        self._write(self.file_c, self.filename_c, None)

    def _write(self, data, filename: str, dir=None) -> str:
        if dir is None:
            out_file = f"{self.out_dir}/{filename}"
        else:
            out_file = f"{dir}/{filename}"

        # print(f"Writing {out_file}")
        with open(out_file, "w") as file:
            file.write(data)
        os.chmod(out_file, 0o770)
        return out_file

    def __str__(self) -> str:
        return self.file_h + self.file_c


def main() -> None:
    pass


if __name__ == "__main__":
    main()
