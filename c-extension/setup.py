from distutils.core import setup, Extension
import os

moduleName = "argonathc"
ver = "1.0"

sourceFiles = list(map( lambda x: "{}/{}".format( "src", x ) , os.listdir("src") ))
extensions  = [ Extension( moduleName, sourceFiles ) ]

setup(name=moduleName,version=ver, ext_modules = extensions )