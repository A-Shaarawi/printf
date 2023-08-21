#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include "more_func.c"

#define fd STDOUT_FILENO

int count_num(int n);
char *_sprintf(int num);
int _printf(const char *format, ...);
int _strlen(char *str);

#endif
