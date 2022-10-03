#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to the memory space containing the res of the concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int n1 = 0, n2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
	{
		n1++;
		i++;
	}

	i = 0;
	while (*(s2 + i))
	{
		n2++;
		i++;
	}

	i = 0;

	res = malloc((n1 + n2 + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);
	while (i < n1 + n2)
	{
		if (i < n1)
			*(res + i) = *(s1 + i);
		else
			*(res + i) = *(s2 + i  - n1);
		i++;
	}
	*(res + i) = '\0';

	return (res);
}
