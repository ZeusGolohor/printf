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
	int len;

	len = _printf("%");
	_printf("%d\n", len);
	return (0);
}
