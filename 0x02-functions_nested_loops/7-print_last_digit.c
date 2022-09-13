#include "main.h"

/**
  *  print_last_digit - This is a function that prints
  *  the last digit of a number
  * @n: integer number
  * Return: the last digit of n
  */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = 0 - i;
	_putchar(i + '0');
	return (i);
}
