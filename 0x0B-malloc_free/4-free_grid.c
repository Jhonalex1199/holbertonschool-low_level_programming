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
	int i = 0;

	while (i < height)
		free(grid[i]);
		i++;

	free(grid);
}
