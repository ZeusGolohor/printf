#include "main.h"

/**
  * _strlen4const - Used to get the string length for cont char *.
  * @str: const char *str.
  * Return: unsigned int.
  */

unsigned int _strlen4const(const char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return ((i - 1));
}
