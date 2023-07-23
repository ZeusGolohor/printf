#include "main.h"

/**
 * _printchar - A function to printer a single character.
 * @c: character to be printed
 * @len: a pointer to a pointer that stored the total character printed.
 *
 * Return: void.
 */
void _printchar(char c, int **len)
{
	if (c != '\0')
	{
		write(1, &c, 1);
		**len = **len + 1;
	}
}

/**
 * _printchars - A function used to print a string the stdout.
 * @str: string to be printed.
 * @len: a pointer to a pointer used to store th e total character printed.
 *
 */
void _printchars(char *str, int **len)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			_printchar(str[i], len);
			i++;
		}
	}
}
