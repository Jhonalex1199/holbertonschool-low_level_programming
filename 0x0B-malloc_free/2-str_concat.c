#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: array 1.
 * @s2: array 2.
 * Return: Pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, a = 0, x = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	p = malloc(i + j + 1);
	if (p == NULL)
	{
		return (0);
	}
	while (a < i)
	{
		p[a] = s1[a];
		k++;
	}
	for (a = 0, x = i; a < x; x++, a++)
	{
		p[x] = s2[a];
	}
	p[x] = '\0';
	return (p);
}
