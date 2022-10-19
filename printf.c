#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	unsigned int fmtlen;
	int counter = 0;
	int *count = &counter;
	char *str;
	va_list list;
	s_f snf[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL}
	};

	va_start(list, format);
	if (format != NULL)
	{
		fmtlen = _strlen(format);
		str = malloc(sizeof(char) * (fmtlen + 1));
		if (str == NULL)
			return (0);
		_strcpy(str, format);
		/** To break down data */
		_parser(str, count, snf, list);

	}
	_write_char('\n');
	va_end(list);
	free(str);
	return (counter);
}

/**
  * _parser - Used to break down data from the printf function.
  * @str: char *str.
  * @count: int *count.
  * @snf: s_f *.
  * @list: va_list list.
  */

void _parser(char *str, int *count, s_f *snf, va_list list)
{
	unsigned int i, x;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != '%')
		{
			_write_char(*(str + i));
			*count = *(count) + 1;
		}
		else
		{
			x = 0;
			while (snf[x].symbol != NULL)
			{
				if (*(snf[x].symbol) == *(str + (i + 1)))
				{
					(*(snf[x].function))(list, count);
				}
				x++;
			}
			i++;
		}
		i++;
	}
}
