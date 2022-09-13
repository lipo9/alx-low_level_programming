#include<stdio.h>

/**
 * main - This is a program that prints
 * the sum of the multiples of 3 or 5 under 1024
 * Return: void
 */

int main(void)
{
	int n, sum;

	n = 1;
	sum = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
