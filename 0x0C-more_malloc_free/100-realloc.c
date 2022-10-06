#include<stdlib.h>


/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: a pointer to the allocated space in memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *space;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		space = malloc(new_size);
		if (space == NULL)
			return (NULL);
		return (space);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return ('\0');
	}

	space = malloc(new_size);
	if (!space)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*((char *)space + i) = *((char *)ptr + i);

	free(ptr);
	return ((void *)space);
}
