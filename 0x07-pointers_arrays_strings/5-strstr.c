#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: the string to look for in @haystack
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;
	while (*(haystack + i))
	{
		while (*(needle + j))
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
			j++;

		}
		if (*(needle + j)  == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
