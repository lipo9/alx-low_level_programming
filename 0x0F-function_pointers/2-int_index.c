#include<stdlib.h>

/**
 * int_index - searches for an integer
 * @array: points to the array to be searched
 * @size: size of the array
 * @cmp: point to the function to use
 * Return: integer index of the first element for which cmp does
 * not return 0, if no element matches, returns -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
		i++;
	}
	return (-1);
}
