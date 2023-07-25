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
	write(1, &c, 1);
	**len = **len + 1;
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
	int buffer = 1024;

	if (str != NULL)
	{
		while ((str[i] != '\0') && (i <= buffer))
		{
			_printchar(str[i], len);
			i++;
		}
	}
}

/**
 * _printdecimal - A function used to print decimal to stdout.
 * @dec: decimal to be printed.
 * @len: total length of characters printed to te stdout.
 *
 * Return: void.
 */
void _printdecimal(int dec, int **len)
{
	char *str;
	int _len = 0;

	_len = snprintf(NULL, 0, "%d", dec);
	str = malloc(_len + 1);
	if (str != NULL)
	{
		snprintf(str, (_len + 1), "%d", dec);
		str[(_len + 1)] = '\0';
		_printchars(str, len);
	}
	free(str);
}

/**
 * _printstrreversed - A function to print a string reversed.
 * @str: the string to be printed.
 * @len: the length of the characters printed to the stdout.
 * @x: integer used to loop through @str.
 *
 * Return: void.
 */
void _printstrreversed(char *str, int **len, int x)
{
	if (str[x] != '\0')
	{
		_printstrreversed(str, len, (x + 1));
		_printchar(str[x], len);
	}
}
