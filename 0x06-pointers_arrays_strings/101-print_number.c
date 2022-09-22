#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int num, div, i;

	if (n >= 0)
		num = n;
	else
	{
		_putchar(45);
		num = -1 * n;
	}
	div = num;
	for (i = 1; div >= 10; i *= 10)
		div /= 10;
	while (i >= 1)
	{
		_putchar(48 + ((num / i) % 10));
		i /= 10;
	}
}
