#include "main.h"

/**
 * is_div - a function that checks if a number is divisible
 * by some number >= 2 div
 * @n: number to perform the check on
 * @d: integer
 * Return: 0 if @n is divisible by @d, otherwise 1
 */
int is_div(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d * d > n)
		return (1);
	return (is_div(n, d + 1));
}

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: integer to check if prime or otherwise
 * Return: 1 if @n is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_div(n, 2));
}
