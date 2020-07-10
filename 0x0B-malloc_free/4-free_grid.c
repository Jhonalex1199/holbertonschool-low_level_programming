#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - free a array
* @grid: pointer
* @height: Height
*/
void free_grid(int **grid, int height)
{
	int i;

	while (i = 0 < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
