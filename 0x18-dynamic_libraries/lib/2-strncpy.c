#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: points to the destination
 * @src: points to the source string
 * @n: number of byte from @src (at most)
 * Return: points to the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l, i;

	i = l = 0;
	while (*(dest + l))
		l++;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n && i < l)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

