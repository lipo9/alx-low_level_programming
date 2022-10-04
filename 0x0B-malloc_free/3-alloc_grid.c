#include<stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: integer
 * @height:integer
 * Return: a pointer to a two dimentional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ar + i) = malloc(width * sizeof(int));
		if (*(ar + i) == NULL)
		{
			while (i >= 0)
			{
				free(*(ar + i));
				i--;
			}
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(ar + i) + j) = 0;
	return (ar);
}
