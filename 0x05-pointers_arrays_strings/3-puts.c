#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a string
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len))
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
