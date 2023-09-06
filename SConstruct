# SConstruct

import os
import sys

# Check if SWIG is installed
#try:
#    import swiglpk
#except ImportError:
#    print("SWIG is not installed. Please install it before running this script.")
#    sys.exit(1)

# Define variables

import sysconfig
SRC_DIR = 'src'          # Source code directory
BUILD_DIR = 'build'      # Build directory
MODULE_NAME = '_complex_number'  # Name of the Python extension module (with underscore)
CXX = 'g++'              # C++ compiler
CXXFLAGS = ['-std=c++11', '-O3']  # Compiler flags (you can modify these)
CPP_PATH= [ sysconfig.get_config_var('INCLUDEPY') ],
# Set the environment
env = Environment(CXX=CXX,
                  CXXFLAGS=CXXFLAGS,
                  SHLIBPREFIX='_',
                  CPPPATH=CPP_PATH,
                  SWIGFLAGS=['-python', '-shadow', '-c++', '-py3'] )

# Specify source files
src_files = ['complex_number.cpp']
swig_file = 'complex_number.i'

# SWIG command
swig_cmd = 'swig -python -c++ -o {} {}'.format(
    'complex_number_wrap.cpp', swig_file)


complex = env.SharedObject('complex_number.cpp')

# Create a shared library
module = env.LoadableModule(target=MODULE_NAME, source=['complex_number.i', complex] )

# Define a clean target
#Clean(module, BUILD_DIR)

# Print a message
print("Build completed successfully!")
