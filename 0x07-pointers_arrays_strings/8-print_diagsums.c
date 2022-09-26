#include<stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a given square matrix of integers
 * @a: matrix of integers
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += *(a + i);
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
