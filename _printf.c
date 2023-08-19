#include "main.h"
#include "functions.c"

/***/
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char printed[];

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format && format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
			}
			if (format[i + 1] == 's')
			{
			}
			if (format[i + 1] == '%')
			{
			}
		}
	}
}
