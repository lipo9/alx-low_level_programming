#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: the string that will be encoded
 * Return: the resulting string
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = {'4', '3', '0', '7', '1'};
	char c[] = {'a', 'e', 'o', 't', 'l'};

	i = j = 0;
	while (*(str + i))
	{
		for (j = 0; j < 5; j++)
		{
			if (*(str + i) == *(c + j) ||
			    *(str + i) == *(c + j) - 32)
				*(str + i) = *(leet + j);
		}
		i++;
	}

	return (str);
}
