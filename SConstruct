# SConstruct

import sysconfig

env = Environment(CXX='g++',
                  CXXFLAGS=['-std=c++11', '-O3'],
                  SHLIBPREFIX='_',
                  CPPPATH=[ sysconfig.get_config_var('INCLUDEPY') ],
                  SWIGFLAGS=['-python', '-shadow', '-c++', '-py3'] )

# Specify source files
complex = env.SharedObject('complex_number.cpp')

# Create a shared library
module = env.LoadableModule(target='_complex_number', source=['complex_number.i', complex] )

# Define a clean target
#Clean(module, BUILD_DIR)

# Print a message
print("Build completed successfully!")
