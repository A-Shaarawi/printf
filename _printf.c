#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 */
int _printf(const char *format, ...)
{
	int i = 0;

	int j = 0;

	va_list args;

	char printed[];

	va_start(args, format);

	if (format && format[i] == %)
	{
		while (format[i])
			{
				;
			}
	}
}
