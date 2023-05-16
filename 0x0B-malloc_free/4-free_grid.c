#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free 2d arrays
 * @grid: 2d grid
 * @height: Height grid’s Dimension
 * Description: Free grid’s memory
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
