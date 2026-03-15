#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ----------------------------------------------------------------------------
#
# project generator functions.
#
# File:     project
# Author:   Peter Malmberg  <peter.malmberg@gmail.com>
# Org:      __ORGANISTATION__
# Date:     2023-01-25
# License:  
# Python:   >= 3.0
#
# ----------------------------------------------------------------------------

import os
from dataclasses import dataclass
from git import Repo
from query import Query
from bashplates import Bp

@dataclass
class ProjectGenerator:
    create_subdir: bool = True
    create_git: bool = True
    create_gitignore: bool = True
    create_readme: bool = True
    create_history: bool = True
    project_name: str = ""
    project_dir: str = ""
    subdir_name: str = ""
    template_dir: str = ""

    def query(self):
        self.project_dir = os.getcwd()
        self.project_name = Query.read_string("Project name?", self.project_name)
        self.create_subdir = Query.read_bool("Create subdirectory?",
                                             default=self.create_subdir)
        if (self.create_subdir):
            self.subdir_name = Query.read_string("Name of subdirectory?",
                                                 default=self.project_name)

        self.create_git = Query.read_bool("Initiate git repository?",
                                          default=self.create_git)

        if (self.create_git):
            self.create_gitignore = Query.read_bool("Create .gitignore?",
                                                    default=self.create_gitignore)
            self.create_readme = Query.read_bool("Create README.md?",
                                                 default=self.create_readme)
            self.create_history = Query.read_bool("Create HISTORY.md?",
                                                  default=self.create_history)

    def git_add(self, file: str) -> None:
        if self.create_git:
            self.repo.index.add(file)

    def create(self):
        if self.create_subdir:
            self.project_dir = f"{self.project_dir}/{self.subdir_name}"
            if not Bp.mkdir(self.project_dir):
                exit()

        f_readme = f"{self.project_dir}/README.md"
        f_history = f"{self.project_dir}/HISTORY.md"
        f_gitignore = f"{self.project_dir}/.gitignore"

        if self.create_git:
            self.repo = Repo.init(self.project_dir)

            if self.create_readme:
                Bp.cp(f"{self.template_dir}/README.md", f_readme)
                self.git_add(f_readme)

            if self.create_history:
                Bp.cp(f"{self.template_dir}/HISTORY.md", f_history)
                self.git_add(f_history)

            if self.create_gitignore:
                Bp.cp(f"{self.template_dir}/gitignore", f_gitignore)
                self.git_add(f_gitignore)

    def commit(self):
        if self.create_git:
            self.repo.index.commit("Initial commit")




def main() -> None:
    pass

if __name__ == "__main__":
    main()
