#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d\n", len);
	return (0);
}
