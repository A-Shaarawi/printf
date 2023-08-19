#include "main.h"
#include <stdarg.h>

/**
 * print_char - returns char given in argument
 * @va_list: pointer to the list of arguments of _printf variadic function
 * Return: the character to be printed
*/
char print_char(va_list args)
{
	char c = va_arg(args, int);

	return (c);
}

/**
 * print_string - return string given in argument
 * @va_list: pointer to the list of arguments of _printf variadic function
 * Return: the string to be printed
*/
char *print_str(va_list)
{
	char *str = va_arg(va_list, char *);

	return (str);
}
