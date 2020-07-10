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
	int x;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
