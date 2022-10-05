#include<stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to two dim array
 * @height: height of the array
 * Return: void
 */

void free_grid(char **grid, char height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}


/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **grid;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	grid = malloc((height + 1) * sizeof(char *));
	if (grid == NULL || height == 0)
	{
		free(grid);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				grid[i] = malloc((c - k + 2) * sizeof(char));
				if (grid[i] == NULL)
				{
					free_grid(grid, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			grid[i][j] = str[k];
		grid[i][j] = '\0';
	}
	grid[i] = NULL;
	return (grid);
}
