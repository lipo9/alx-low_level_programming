#include "main.h"

/**
  * times_table - This is a function that prints
  * the 9 times table, starting with 0
  * Return: void
  */

void times_table(void)
{
	int i, j, a, b, r;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			r = j * i;
			b = r % 10;

			a = (r - b) / 10;
			if (a == 0)
			{
				if (i != 0)
					_putchar(' ');
			}
			else
				_putchar(a + '0');

			_putchar(b + '0');

			if (i == 9 && j == 9)
				break;

			if (i == 9)
				continue;
			_putchar(',');

			_putchar(' ');
		}
		_putchar('\n');
	}
}
