#!/bin/bash

gcc -Wall -Werror -Wextra -c *.c
ar cr libft.a *.o
ranlib libft.a
