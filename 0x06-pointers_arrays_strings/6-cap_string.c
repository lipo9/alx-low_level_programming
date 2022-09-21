#include "main.h"

/**
 * cap_string - a function that capitalizes all words the of a string
 * @str: the string to capitalize
 * Return: resulted string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] > 96 && str[i] < 123))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == ';'
		|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '{' || str[i - 1] == '}'
		|| str[i - 1] == '\t' || str[i - 1] == '\n' || i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
