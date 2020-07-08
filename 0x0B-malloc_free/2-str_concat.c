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
	int i = 0, j = 0, k = 0, l = 0;
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
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	for (k = 0, l = i; k < j; l++, k++)
	{
		p[l] = s2[k];
	}
	p[l] = '\0';
	return (p);
}
