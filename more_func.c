#include "main.h"

/***/
int _strlen(char *str)
{
	int i = 0;

	while(*str++)
		i++;

	return (i);
}