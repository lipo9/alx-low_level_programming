#include "main.h"
#include<stdio.h>
/**
 * print_rev - a function that prints the reverse of a string
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	while (i - 1 >= 0)
	{
		_putchar(s[i-- - 1]);
	}

	_putchar('\n');
}
