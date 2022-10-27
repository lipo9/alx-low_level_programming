#include "main.h"
/**
 * binary_to_uint - Converts a binary number into an unsigned int number
 * @b: A pointer to a binary number
 * Return: the converted number, or 0 if
 *		-there is one or more chars in the string b
 *		that is not 0 or 1
 *		-b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, mt = 1;
	int length = 0;

	if (!b)
		return (0);
	while (*(b + length))
		length++;
	for (length -= 1; length >= 0; length--)
	{
		if (*(b + length) != '0' && *(b + length) != '1')
			return (0);
		number += (*(b + length) - '0') * mt;
		mt *= 2;
	}
	return (number);
}
