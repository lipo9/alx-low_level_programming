#include <stdio.h>

/**
  * main - this program prints the sum of the fibonacci terms whithout
  * exceeding 4,000,000
  * Return: void
  */

int main(void)
{
	int i;
	long int u1, u2, sum;

	u1 = 1, u2 = 2;
	sum = u2;

	for (i = 2; i < 50; i++)
	{
		u2 += u1;
		u1 = u2 - u1;
		if (u2 <= 4e6 && u2 % 2 == 0)
			sum += u2;
	}

	printf("%ld\n", sum);
	return (0);
}
