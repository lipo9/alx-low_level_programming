#include "main.h"

/**
  * print_sign - A function that checks the sign of a given number
  * @n: The number to be checked
  * Return: 1 if n is positive. returns 0 if n is zero and returns -1 if n
  * is less than zero
  */

int print_sign(int n)
{
	int r;
	char sign;

	if (n > 0)
	{
		r = 1;
		sign = '+';
	}
	if (n == 0)
	{
		r = 0;
		sign = '0';
	}

	if (n < 0)
	{
		r = -1;
		sign = '-';
	}
	_putchar(sign);
	return (r);
}
