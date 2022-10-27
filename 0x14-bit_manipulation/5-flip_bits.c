#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: Unsigned long integer number
 * @m: Unsigned long integer number
 * Return: The number of bits you would need to flip to get from one
 *		number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, n_xor_m = n ^ m;

	while (n_xor_m)
	{
		count += (n_xor_m & 1);
		n_xor_m >>= 1;
	}
	return (count);
}
