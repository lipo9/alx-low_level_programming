#include "main.h"

/**
  * _abs  - This function computes the absolute value of an integer
  * @n: The number to copute it's absolute value
  * Return: the absolute value of n
  */

int _abs(int n)
{
	if (n < 0)
		n = 0 - n;
	return (n);
}
