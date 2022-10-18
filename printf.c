#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	unsigned int i, x, fmtlen;
	int counter = 0;
	int *count = &counter;
	char *str;
	va_list list;
	s_f snf[] = {
		{"c", print_char},
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
	_write_char('\n');
	va_end(list);
	free(str);
	return (counter);
}
