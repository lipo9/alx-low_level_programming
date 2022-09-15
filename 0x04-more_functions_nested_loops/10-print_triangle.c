#include "main.h"

/**
 * print_triangle - a function that prints a triangle (using the character #)
 * followed by a new line
 * @size: integer number representing the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
