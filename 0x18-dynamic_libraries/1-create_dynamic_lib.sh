#!/bin/bash

# compile the C source files into a dynamic library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o

# clean up object files
rm -f *.o
