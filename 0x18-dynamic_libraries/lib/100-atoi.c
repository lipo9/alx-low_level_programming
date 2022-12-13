#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int len = 0;
	int i;
	int sign = 1;
	unsigned int x = 0;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+' || s[i] == ' ')
			continue;
		else if (s[i] >= '0' && s[i] <= '9')
			x = x * 10 + s[i] - '0';

		else if (x > 0)
			break;
	}

	return (x * sign);

}
