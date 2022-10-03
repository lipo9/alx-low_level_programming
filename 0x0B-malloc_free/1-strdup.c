#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - copies a string to a new allocated space in memory
 * @str: string
 * Return: a pointer to the newly allocated space in memory
 * where the copy of @str is stored
 */

char *_strdup(char *str)
{
	int i = 0, n = 0;
	char *buf;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		n++;

	buf = malloc(sizeof(char) * (n + 1));
	if (buf == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		buf[i] = str[i];
	buf[n] = '\0';

	return (buf);
}
