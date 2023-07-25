#include "main.h"

/**
 * _printf - A function used to print to the stdout.
 * @format: format to be used during printing.
 *
 * Return: int.
 */
int _printf(const char *format, ...)
{
	int **len, *_len, __len;
	va_list ap;

	__len = 0;
	_len = &__len;
	len = &_len;
	va_start(ap, format);
	if (format != NULL)
		_printer(format, ap, len);
	va_end(ap);
	if (**len == 0)
		return (**len);
	return (**len);
}

/**
 * _printer - A function used to print to the stdout.
 * @format: format to be used during printing.
 * @ap: a variable that stores all the variadic arguments.
 * @len: a pointer to a pointer that stores the total character printed.
 *
 * Return: void.
 */
void _printer(const char *format, va_list ap, int **len)
{
	int **i, *_i, __i = 0;

	_i = &__i;
	i = &_i;
	while (format[**i] != '\0')
	{
		if (format[**i] != '%')
		{
			_printchar(format[**i], len);
			**i = **i + 1;
		}
		else
		{
			_switch(format, ap, len, i);
			**i = **i + 2;
		}
	}
}

/**
 * _switch - A function used to select the right printer function.
 * @format: format used during printing.
 * @ap: a variable that stores all the variadic arguments.
 * @len: a pointer to a pointer that stores the total character printed.
 * @i: used to keep track of characters in @format.
 *
 * Return: void.
 */
void _switch(const char *format, va_list ap, int **len, int **i)
{
	switch (format[(**i + 1)])
	{
		case 'c':
			_printchar(va_arg(ap, int), len);
			break;
		case 's':
			_printchars(va_arg(ap, char *), len);
			break;
		case '%':
			_printchar(format[(**i + 1)], len);
			break;
		case 'd':
			_printdecimal(va_arg(ap, int), len);
			break;
		case 'i':
			_printdecimal(va_arg(ap, int), len);
			break;
		case 'b':
			_printbinary(va_arg(ap, int), len);
			break;
		case 'r':
			_printstrreversed(va_arg(ap, char *), len, 0);
			break;
		default:
			**i = **i - 1;
	}
}
