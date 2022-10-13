#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;
	char *ptr;

	va_start(strings, n);
	while (i < n)
	{
		ptr = va_arg(strings, char *);
		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
