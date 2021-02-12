#!/bin/bash
# script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
