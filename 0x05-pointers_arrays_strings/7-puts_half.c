#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: a string
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (*(str + len))
		len++;

	if (len % 2 == 1)
		i = (len + 1) / 2;
	else
		i = len / 2;

	while (i < len)
		_putchar(*(str + i++));
	_putchar('\n');
}
