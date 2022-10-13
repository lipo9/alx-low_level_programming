#include "variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - returns the sum of its parameters
 * @n: The numbers of its parameters
 * @...: variable number of parameters passed to the function
 * Return: the sum of the parameters if n > 0. if n == 0 returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list numbers;

	va_start(numbers, n);
	while (i < n)
		sum += va_arg(numbers, int), i++;

	va_end(numbers);
	return (sum);
}
