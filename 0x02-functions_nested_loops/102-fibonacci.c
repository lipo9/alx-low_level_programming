#include <stdio.h>

/**
  * main - this program prints the first 50 fibonacci numbers
  * Return: void
  */

int main(void)
{
	int i;
	long int u1, u2;

	u1 = 1, u2 = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			printf("%ld", u1);
		else if (i == 1)
			printf(", %ld", u2);
		else
		{
			u2 += u1;
			u1 = u2 - u1;
			printf(", %ld", u2);
		}
	}

	printf("\n");
	return (0);
}
