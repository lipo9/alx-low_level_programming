#include "main.h"

char *add_digit_strings(char *, char *, char *, int);
char *infinite_add(char *, char *, char *, int);

/**
 * add_digit_strings - perform addition of two strings of digits.
 * @n1: string of digits
 * @n2: string of digits
 * @r: is the buffer that the function will use to store the result
 * @ir: actual index of the buffer
 *
 * Return: a pointer to the result or 0
 */
char *add_digit_strings(char *n1, char *n2, char *r, int ir)
{
	int n, d = 0;

	while (*n1 && *n2)
	{
		n = (*n1 - '0') + (*n2 - '0');
		n += d;
		*(r + ir) = (n % 10) + '0';
		d = n / 10;
		ir--;
		n1--;
		n2--;
	}
	while (*n1)
	{
		n = (*n1 - '0') + d;
		*(r + ir) = (n % 10) + '0';
		d = n / 10;
		ir--;
		n1--;
	}
	while (*n2)
	{
		n = (*n2 - '0') + d;
		*(r + ir) = (n % 10) + '0';
		d = n / 10;
		n2--;
		ir--;
	}
	if (d && ir >= 0)
	{
		*(r + ir) = (d % 10) + '0';
		return (r + ir);
	}
	else if (d && ir < 0)
		return (0);

	return (r + ir + 1);
}

/**
 * infinite_add - Adds two numbers
 * @n1: string
 * @n2: string
 * @r: is the buffer that the function will use to store the result
 * @size_r: The buffer's size
 * Return: a pointer to the result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1l = 0, n2l = 0;

	for (i = 0; *(n1 + i); i++)
		n1l++;
	for (i = 0; *(n2 + i); i++)
		n2l++;
	if (size_r <= n1l + 1 || size_r <= n2l + 1)
		return (0);
	n1 += n1l - 1;
	n2 += n2l - 1;
	*(r + size_r) = '\0';

	return (add_digit_strings(n1, n2, r, --size_r));
}
