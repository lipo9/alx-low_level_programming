#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between the numbers
 * @n: number of integers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(numbers);
}
