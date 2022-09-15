#include "main.h"

/**
 * print_number - Prints its argument integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{	i = 0 - i;
		_putchar('-');
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
