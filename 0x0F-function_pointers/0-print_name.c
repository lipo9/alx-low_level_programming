#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to print
 * @f: point to a function that iwll print the name @name
 * Return: void
 */


void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
