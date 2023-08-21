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
void print_num_d(va_list args)
{
	char *str;
	int num = va_arg(va_list, int);
	int len = sprintf(str, "%d", num);
	write(1, str, len);
}

/**
 * print_num_i - returns int given in argument in base 10
 * @va_list: pointer to _printf variable arguments
 * Return: the decimal number
*/
void print_num_i(va_list args)
{
	char str2[32];
	char *str3;
	int base, i = 0, num2 = va_arg(va_list, int);
	int len2;
	long tmp;
	sprintf(str3, "%d", num2);
	str3[i] == 0 ? (str3[i + 1] == 'x' || str3[i + 1] = 'X' ? base = 16 : base = 2) : base = 10;
	tmp = strtol(str3, NULL, base);
	len2 = sprintf(str2, "%d", tmp;
	write(1, str2, len2);
}
