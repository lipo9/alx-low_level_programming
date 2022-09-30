#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string
 * @s2: string
 * Return: return 0 if s1==s2, and the differece if not equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
