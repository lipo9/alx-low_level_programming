#include<stdlib.h>

/**
 * argstostr -  a function that concatenates all the arguments of the program
 * @ac: number of arguments of the program
 * @av: arguments of the program
 * Return: a pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			*(str + k++) = *(*(av + i) + j);
		*(str + k++) = '\n';
	}
	*(str + size) = '\0';
	return (str);
}
