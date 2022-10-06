#include<stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of chars from @s2 to append to @s1
 * Return: a pointer to newly allocated space in memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, size = 0, ss1 = 0, ss2 = 0;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + ss1))
		ss1++;

	while (*(s2 + ss2))
		ss2++;

	if (n > ss2)
		size = ss1 + ss2;
	else
		size = ss1 + n;

	res = malloc(sizeof(char) * (size + 1));

	if (res == NULL)
		return (NULL);

	size = 0;
	for (i = 0; *(s1 + i); i++)
		*(res + size++) = *(s1 + i);

	for (i = 0; *(s2 + i) && i < n; i++)
		*(res + size++) = *(s2 + i);

	res[size] = '\0';

	return (res);
}
