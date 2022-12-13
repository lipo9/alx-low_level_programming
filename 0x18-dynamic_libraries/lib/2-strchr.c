#include "main.h"
#include<stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a character
 * Return: a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i, n = 0;

	while (*(s + n))
		n++;
	for (i = 0; i <= n; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
