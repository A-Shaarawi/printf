#ifndef MAIN_H
#define MAIN_H



#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#define fd STDOUT_FILENO

int _printf(const char *format, ...);

#endif
