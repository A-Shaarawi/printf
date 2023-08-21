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
