#include "main.h"
#include "functions.c"
/***/
int _printf(const char *format, ...)
{
	int i = 0;

	va_list args;
	
	int fd = STDOUT_FILENO;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == ' ')
		{
			putchar(32);
		}
		if (format[i] == '\n')
		{
			putchar(10);
		}
		if (format && format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char y = print_char(args);
				write(fd, &y, 1);
			}
			/*if (format[i + 1] == 's')
			{
			}
			if (format[i + 1] == '%')
			{
			}*/
		}
	}
	va_end(args);
	return (0);
}
