#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
    len = _printf("%b\n", -1);
    _printf("%d\n", len);
    return (0);
}
