#include "main.h"
/**
 * _printf - function that prints
 * @format: parameter
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
        char *str, c;
        va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (; format[i] 
