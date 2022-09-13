#include "main.h"

/**
 * print_times_table - This is a function that prints
 * the n times table, starting with 0 while n is less than 15, greater than 0
 * @n: integer number
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (m > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(m + '0');
				}
			}
			_putchar('\n');
		}
	}
}
