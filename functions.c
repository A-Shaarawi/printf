#include "main.h"

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
char *print_str(va_list args)
{
	char *str = va_arg(va_list, char *);

	return (str);
}

/***/
int print_num_d(va_list args)
{
	return ();
}

/***/
long print_num_i(va_list args)
{
	char *str;
	int base, i = 0, num = va_arg(va_list, int);

	sprintf(str, "%d", num);
	str[i] == 0 ? (str[i + 1] == 'x' || str[i + 1] = 'X' ? base = 16 : base = 2) : base = 10;
	return (strtol(str, NULL, base));
}
