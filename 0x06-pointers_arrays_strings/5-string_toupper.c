#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to uppercase
 * @s: string
 * Return: the string in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if ((*(s + i) < 123) && (*(s + i) > 96))
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
