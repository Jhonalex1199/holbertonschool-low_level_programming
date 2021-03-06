#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatenates two string.
* @s1: string 1.
* @s2: string 2.
* @n: size to allocate memory.
* Return: pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, a = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	if (n >= a)
	{
		n = a;
		p = malloc(sizeof(char) * (i + a + 1));
	}
	else
		p = malloc(sizeof(char) * (n + i + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		p[x++] = s2[y];
	}
	p[x++] = '\0';
	return (p);
}
