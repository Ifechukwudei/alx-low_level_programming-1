#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory dynamically allocated
 * @grid: pointer to a 2-D array
 * @height: height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
