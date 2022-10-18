#include "main.h"

/**
  * _write_char - Used to write a character to the standard output.
  * @c: first operand.
  * Return: void.
  */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
