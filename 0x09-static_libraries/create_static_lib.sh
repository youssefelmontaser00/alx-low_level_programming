#!/bin/bash
gcc -Wall -pedantic -werror -wextra -c *.c
ar cr liball.a *.o
