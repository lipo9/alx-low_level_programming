#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>


/**
 * print_int - prints an integer
 * @arg: a list of arguments pointing to
 * the integer to print
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char - prints a char
 * @arg: a list of arguments pointing to
 * the character to be printed
 */
void print_char(va_list arg)
{
	printf("%c", (char)va_arg(arg, int));
}

/**
 * print_float - prints a float number
 * @arg: a list of arguments pointing to
 * the float to be printed.
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: a list of arguments pointing to
 * the string to be printed
 */
void print_string(va_list arg)
{
	char *ptr;

	ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * @...: a variable number of args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list arg;
	char *separator = "";
	print_t fp[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	while (format && *(format + i))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(fp[j].c)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			separator = ", ";
			fp[j].fp_print(arg);
		}
		i++;
	}

	printf("\n");

	va_end(arg);
}
