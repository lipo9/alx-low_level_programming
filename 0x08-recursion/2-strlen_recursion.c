#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: points a string
 * Return: length of the string pointed to by @s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
