#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alocates memory using malloc.
 * @b: size.
 * Return: Always pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
