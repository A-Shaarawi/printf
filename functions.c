#include "main.h"

/**
 * print_char - returns char given in argument
 * @va_list: pointer to _printf variable arguments
 * Return: the character
*/
char print_char(va_list args)
{
	char c = va_arg(args, int);

	return (c);
}

/**
 * print_string - returns string given in argument
 * @va_list: pointer to _printf variable arguments
 * Return: the string
*/
char *print_str(va_list args)
{
	char *str = va_arg(va_list, char *);

	return (str);
}

/**
 * print_num_d - returns int given in argument in base 10
 * @va_list: pointer to _printf variable arguments
 * Return: the decimal number
*/
int print_num_d(va_list args)
{
	return ();
}

/**
 * print_num_i - returns int given in argument in base 10
 * @va_list: pointer to _printf variable arguments
 * Return: the decimal number
*/
long print_num_i(va_list args)
{
	char *str;
	int base, i = 0, num = va_arg(va_list, int);

	sprintf(str, "%d", num);
	str[i] == 0 ? (str[i + 1] == 'x' || str[i + 1] = 'X' ? base = 16 : base = 2) : base = 10;
	return (strtol(str, NULL, base));
}
