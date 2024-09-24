#!/bin/bash

# Compile all source files to object files
gcc -fPIC -g -c -Wall *.c

# Link the shared library from the object files
gcc -shared -o liball.so -Wl,-soname,liball.so.1 *.o

# Clear all object files
rm *.o
