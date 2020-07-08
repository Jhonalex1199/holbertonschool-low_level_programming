#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - newly allocate
 * @str: array
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(i * sizeof(char));
	if (p == 0)
	{
		return (0);
	}

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
