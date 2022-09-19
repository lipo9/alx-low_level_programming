#include<stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array of integers
 * @n: integer number
 * Return: void
 */

void print_array(int *a, int n)
{
	int len = 0;
	int i = 0;

	while (a[len])
		len++;

	for (i = 0; i < len && i < n; i++)
	{
		printf("%d", a[i]);
		if (i < len - 1 && i < n - 1)
			printf(", ");
	}

	printf("\n");
}
