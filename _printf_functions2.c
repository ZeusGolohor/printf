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
	
	if (n <= 0)
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
