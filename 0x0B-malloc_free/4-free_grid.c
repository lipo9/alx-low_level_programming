#include<stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to two dim array
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
