#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - eturns a pointer to a 2 dimensional array of integers.
* @width: width.
* @height: height.
* Return: ppointer
*/
int **alloc_grid(int width, int height)
{
	int i = 0, a = 0, x = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (x <= i)
			{
				free(p[x]);
				x++;
			}
			free(p);
			return (NULL);
		}
		while (a < width)
		{
			p[i][a] = 0;
			a++;
		}
		i++;
	}
	return (p);
}
