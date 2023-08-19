#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define fd STDOUT_FILENO


int _printf(const char *format, ...);
char print_char(va_list args);
char *print_str(va_list args);

#endif
