#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: the number of bytes in the initial
 * segment of @s which consist only of bytes from @accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
			if (*s == *(accept + i))
			{
				j++;
				break;
			}
			else if (*(accept + i + 1) == '\0')
				return (j);
		s++;
	}
	return (j);
}
