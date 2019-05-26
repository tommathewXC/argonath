from distutils.core import setup, Extension
import os

moduleName = "argonathcpp"
ver = "1.0"

sourceFiles = list(map( lambda x: "{}/{}".format( "src", x ) , os.listdir("src") ))
extensions  = [ Extension( moduleName, sourceFiles, extra_compile_args=["--std=c++11"] ) ]

setup(name=moduleName,version=ver, ext_modules = extensions )