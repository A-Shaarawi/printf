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
	else if (format[0] == '\0')
		return (3);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = (char)va_arg(args, int);
				write(fd, &c, 1), j++, i++;
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
				write(fd, str, _strlen(str)), j += _strlen(str), i++;
			}
			else if (format[i + 1] == '%')
				write(1, "%%", 1), j++, i++;
			else if (format[i + 1] != 's' || format[i+1] != 'c' || format[i+1] != '%')
			{
				if (format[i + 2] == '\0')
					return(225);
				else
					write(fd, &(format[i]), 1), i++, j++;
			}
			else
				return (255);
		}
		else if (format[i] != '%')
			write(fd, &(format[i]), 1), j++;
	}
	va_end(args);
	return (j);
}
