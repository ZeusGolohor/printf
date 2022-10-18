#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	unsigned int i, fmtlen;
	int counter = 0;
	int *count = &counter;
	char *str;


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
				/**putchar(*(str + (i + 1)));*/
				_write_char('*');
				*count = *(count) + 1;
				i++;
			}
			i++;
		}
	}
	_write_char('\n');
	free(str);
	return (counter);
}
