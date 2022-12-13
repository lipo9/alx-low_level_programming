#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: points to the destination string
 * @src: points to the source string
 * @n: number of byte from @src (at most)
 * Return: points to the result of the concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dl;

	i = dl = 0;
	while (*(dest + dl))
	{
		dl++;
	}
	while (i < n && *(src + i))
	{
		*(dest + dl) = *(src + i);
		dl++;
		i++;
	}
	*(dest + dl + n + 1) = '\0';

	return (dest);
}
