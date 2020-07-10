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
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	if (n >= a)
	{
		n = j;
	p = malloc(sizeof(char) * (i + j + 1));
	}
	else
		p = malloc(sizeof(char) * (n + i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	while (x < i)
	{
		p[x] = s1[x];
		x++;
	}
	while (y < n)
	{
		p[x++] = s2[y];
		y++;
	}
	p[x++] = '\0';
	return (p);
}
