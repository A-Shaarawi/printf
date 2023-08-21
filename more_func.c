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
/**
 * count_num - returns the length of a string
 * @n string input
 * Return: the length
*/
int count_num(int n)
{
        int len = 0;
        if (n == 0)
                len++;
        while (n)
        {
                len++;
                n /= 10;
        }
        return (len);
}
/**
 * _sprintf - returns the length of a string
 * @num: string input
 * Return: the length
*/
char *_sprintf(int num)
{
        int i = 0, len, t;
        char *str ,c = '-';
        len = count_num(num);
        if (num < 0)
        {
            write(1, &c, 1);
            num *= -1;
        }
        str = (char *)malloc(len + 1);
        if (str == NULL)
                exit(EXIT_FAILURE);
        for (; i < len; i++)
        {
                t = pow(10, len - i - 1);
                str[i] = (num / t) + 48;
                num %= t;
        }
        str[i] = '\0';
        return (str);
}
