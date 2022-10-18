#include "main.h"

/**
  * print_char - Used to print a character to the standard output.
  * @list: first operand.
  * @count: second operand.
  * Return: void.
  */

void print_char(va_list list, int *count)
{
	char c = va_arg(list, int);

	_write_char(c);
	*count = *(count) + 1;
}
