#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 * _printf - function that prints
 *
 * @format: parameter
 * @...: parameter
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int i;

	char *str, c;

	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = (char)va_arg(args, int);
				write(fd, &c, 1);
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					write(1, "(null)", 6);
					return (6);
				}
				else
				write(fd, str, _strlen(str));
			}
			else if (format[i + 1] == '%')
			{
				write(1, "%%", 1);
			}
			else if (format[i + 1] == ' ')
			{
				return (-1);
			}
			else if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else
			{
				return (-1);
			}
			i++;
		}
		else if (format[i] != '%')
		{
			write(fd, &(format[i]), 1);
		}
	}
	va_end(args);
	return (i);
}
