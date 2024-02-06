#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", i, *(array + i));
		if (value == *(array + i))
			return (i);
		i++;
	}
	return (-1);
}
