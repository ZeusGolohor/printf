#include "main.h"

/**
 * _printbinary - A function used to convert decimal to binary.
 * @n: the decimal to be converted to binary.
 * @len: variabl used to keep track the characters printed to the stdout.
 *
 * Return: void.
 */
void _printbinary(int n, int **len)
{
	int num = 0;
	int i = 0;

	if (n == 0)
		_printchar('0', len);
	else
	{
		while (num < n)
		{
			num = num + _pow(i, 2);
			i++;
		}
		i--;
		_printchar('1', len);
		num = _pow(i, 2);
		i--;
		while (i >= 0)
		{
			if ((num + _pow(i, 2)) <= n)
			{
				num = num + _pow(i, 2);
				_printchar('1', len);
			}
			else
				_printchar('0', len);
			i--;
		}
	}
}

/**
 * _pow - A function to get a number raise to the power a of another number.
 * @n: the power.
 * @times: the number.
 *
 * Return: int.
 */
int _pow(int n, int times)
{
	int i = 0;
	int b = 1;

	while (i < n)
	{
		b = b * times;
		i++;
	}
	return (b);
}

/**
 * rot13_edchecker - A function used to check for the right rot13 character.
 * @str: string to be rot13_ed.
 * @len: used to keep track of the number of characters printed to the stdout.
 * @i: used to keep track of characters in @str.
 * @first: 'a' or 'A'.
 * @second: 'z' or 'Z'.
 * @thrid: 'm' or 'M'
 * @fourth: 'n' or 'N'.
 * @array1: array of 'a-m or A-M'.
 * @array2: array of 'n-z or N-Z'
 *
 * Return: void.
 */
void rot13_edchecker(char *str, int **len, int i, char first, char second, char third, char fourth, char *array1, char *array2)
{
	int x;

		if ((str[i] >= first) && (str[i] <= third))
		{
			for (x = 0; array1[x] != '\0'; x++)
			{
				if (array1[x] == str[i])
				{
					_printchar(array2[x], len);
					break;
				}
			}
		}
		else if ((str[i] >= fourth) && (str[i] <= second))
		{
			for (x = 0; array2[x] != '\0'; x++)
			{
				if (array2[x] == str[i])
				{
					 _printchar(array1[x], len);
					 break;
				}
			}
		}
}
