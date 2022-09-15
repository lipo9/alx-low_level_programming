#include<stdio.h>

void fizzbuzz(int n);
/**
 * main - entry of this program
 * Return: 0 (as success)
 */

int main(void)

{
	fizzbuzz(100);
	return (0);
}

/**
 * fizzbuzz - prints numbers from 1 to n, but for multiples of 3 prints Fizz
 * for multiples of 5 prints Buzz , for multiples of both it prints FizzBuzz
 * @n: the number to reach before the program ends
 * Return: void
 */
void fizzbuzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != n)
			printf(" ");
		else
			printf("\n");
	}
}
