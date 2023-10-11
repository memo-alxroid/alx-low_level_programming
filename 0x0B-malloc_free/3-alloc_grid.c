#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *  alloc_grid - create a grid
 * @width: width of the grid
 * @height: height of the grid
 * Return:  a pointer to a 2 dimensional array of integers
 * OR NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);

			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
