#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: points to the string that will be encoded
 * Return: points to the string result of encoding
 */

char *rot13(char *str)
{
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (*(str + i))
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == *(c + j))
			{
				*(str + i) = *(r13 + j);
				break;
			}
		}
		i++;
	}

	return (str);
}
