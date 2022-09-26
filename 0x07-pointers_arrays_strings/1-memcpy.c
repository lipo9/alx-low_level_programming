#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy from @src to @dest
 * Return: a pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
