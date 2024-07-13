#!/bin/bash

# Create object files from all .c files in current directory
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# Create the static library from the object frles
ar -rc liball.a *.o

# Clean up object files
rm *.o
