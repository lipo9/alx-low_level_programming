#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: points to the destination string
 * @src: points to the source string
 * Return: pointer to the result of the concatenation
 */

char *_strcat(char *dest, char *src)
{
	int dl = 0, i;

	while (dest[dl])
	{
		dl++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dl] = src[i];
		dl++;
	}
	dest[dl] = '\0';
	return (dest);
}
