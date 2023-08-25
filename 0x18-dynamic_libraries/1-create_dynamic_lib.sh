#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.C
gcc -shared -o liball.so *.o
export LD_LIBRALY_PATH=.:$LD_LIBRALY_PATH
