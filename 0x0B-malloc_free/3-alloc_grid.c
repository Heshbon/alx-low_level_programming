#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: the input of the width
 * @height: the input of the height
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);

		if (grid[a] == NULL)
		{
			free(grid);
			for (b = 0; b <= height; b++)
				free(grid[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
