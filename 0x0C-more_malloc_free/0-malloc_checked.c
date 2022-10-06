#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated space in memory
 */


void *malloc_checked(unsigned int b)
{
	void *space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
