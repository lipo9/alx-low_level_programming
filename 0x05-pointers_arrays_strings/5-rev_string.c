#include "main.h"
#include<stdlib.h>

/**
 * rev_string - a function that reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (*(s + len) != '\0')
		len++;

	i = len - 1;
	while (i >= len / 2)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
		i--;
	}

}
