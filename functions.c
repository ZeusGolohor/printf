#include "main.h"

/**
  * print_char - Used to print a character to the standard output.
  * @list: va_list list.
  * @count: int *count.
  * Return: void.
  */

void print_char(va_list list, int *count)
{
	char c = va_arg(list, int);

	_write_char(c);
	*count = *(count) + 1;
}

/**
  * print_string - Used to print a string.
  * @list: va_list list.
  * @count: int *count.
  * Return: void.
  */

void print_string(va_list list, int *count)
{
	unsigned int i;
	char *string = va_arg(list, char *);

	i = 0;
	while (*(string + i) != '\0')
	{
		_write_char(*(string + i));
		*count = *(count) + 1;
		i++;
	}
}

/**
  * print_perc - Used to print a percentage sign.
  * @list: va_list list.
  * @count: int *count.
  * Return: void.
  */

void print_perc(__attribute__((unused)) va_list list, int *count)
{
	_write_char('%');
	*count = *(count) + 1;
}
