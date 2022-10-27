#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Unsigned long integer
 * @index: index of the bit to get (strating at 0)
 * Return: the value of the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (((n >> index) & 1) == 0)
		return (0);
	return (1);
}
