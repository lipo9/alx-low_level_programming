#include "main.h"

/**
 * reverse_array - a function that reverses an array
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = n - 1;
	while (i >= n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
		i--;
	}
}
