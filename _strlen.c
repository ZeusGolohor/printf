#include "main.h"

/**
  * _strlen - Used to get a string length.
  * @str: first operand.
  * Return: Unsigned int.
  */

unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return ((i - 1));
}
