#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size the array to be created
 * @c: the char to use to populate the array
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ar + i) = c;
	return (ar);
}
