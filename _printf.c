#include "main.h"
#include <string.h>
#include <stdarg.h>
/*
 * _printf - fucntion that prints
 * @format: parameter
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0;

	va_list args;
	
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg(args, int);
				write(fd, &c, 1);
			}
			else if (format[i + 1] == 's')
			{
				char *str = va_arg(args, char *);
				write(fd,str,strlen(str));
			}
			else if (format[i + 1] == '%')
			{
				write(1,"%%",1);
			}
			i++;
		}
		else if (format[i] != '%')
		{
			write(fd,&format[i],1);
		}
	}
	va_end(args);
	return (0);
}
