#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes a 2-D array dynamically
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2-D array,
 * NULL (on failure or if width or height is 0)
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

		grid = malloc(height * sizeof(*grid));

	if (height < 1 || width < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
