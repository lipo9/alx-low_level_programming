#include <stdio.h>

long largest_prime_factor(long n);

/**
 * main - Entry point of the program
 * Description: a program that finds then prints the largest prime
 * factor of the number 612852475143.
 * Return: 0 (Success)
 */

int main(void)
{
	long num;

	num = largest_prime_factor(612852475143);
	printf("%ld\n", num);
	return (0);
}

/**
 * largest_prime_factor - the function that finds and returns the largest
 * prime factor of its argument
 * @n: long integer
 * Return: the largest prime factor of @n
 */

long largest_prime_factor(long n)
{
	long prime, i;

	prime = n;
	i = 2;
	while (i < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime = prime / 2;
			continue;
		}
		for (i = 3; i < (prime / 2); i += 2)
		{
			if ((prime % i) == 0)
				prime /= i;
		}
	}
	return (prime);
}
