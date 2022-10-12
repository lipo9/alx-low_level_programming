#include<stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: point to an array
 * @size: the size of the array
 * @action: a pointer to the fubction to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (!size || !array || !action)
		return;

	while (i < size)
		action(*(array + i++));
}
