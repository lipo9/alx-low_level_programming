#include<stdio.h>

/**
 * positive_or_negative - This function tests whether a given number is zero,
 * positive or negative
 * @i: the number to perform the check on
 * Return: retuns void
  */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
