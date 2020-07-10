#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - concatenates two strings.
 * @min: min.
 * @max: max.
 * Return: P
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
