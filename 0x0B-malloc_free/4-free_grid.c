#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -Iit frees 2 Dimantion  array
 * @grid:  Grid
 * @height: dimension of grid
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}

