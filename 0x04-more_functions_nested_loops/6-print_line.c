#include "main.h"

/**
 * print_line - This function draws a straight line in the terminal
 * by printing the character _.
 * @n: The number of times the character _ will be printed.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
