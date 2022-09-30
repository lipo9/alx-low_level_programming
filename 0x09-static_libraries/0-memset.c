#include "main.h"

/**
 * _memset - fills memory with a cinstant byte
 * @s: memory area
 * @b: the constant byte
 * @n: number of bytes to fill with @b
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		*(s + i++) = b;
	return (s);
}
