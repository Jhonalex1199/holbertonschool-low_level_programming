#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it.
 * @size: size of array.
 * @c: character.
 * Return: p.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = malloc(size * sizeof(char));
	if (size == 0 || p == 0)
	{
		return (0);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
