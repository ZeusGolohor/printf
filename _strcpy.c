#include "main.h"

/**
  * _strcpy - Used to copy a string into another string.
  * @dest: first operand.
  * @src: second operand.
  * Return: void.
  */

void *_strcpy(char *dest, const char *src)
{
	unsigned int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (0);
}
