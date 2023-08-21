#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string input
 * Return: the length
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}

/***/
char *_sprintf(int num)
{
	int i = 0, len, t;
	char str[32], ch;

	len = _strlen(num);
	for (; num != 0; i++)
	{
		t = pow(10, len - i - 1);
		ch = (num / t) + 48;
		num %= t;
		str[i] = 'ch'
	}
	str[i] = '\0';
	return (str);
}
