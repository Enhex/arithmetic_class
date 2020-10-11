import os

from conans import ConanFile, tools


class ArithmeticClassConan(ConanFile):
    name = "arithmetic_class"
    version = "master"
    license = "Apache 2.0 with LLVM exceptions"
    no_copy_source = True
    # No settings/options are necessary, this is header only
    exports_sources = "src/*"

    def package(self):
        self.copy("*.h", "include", "src")
