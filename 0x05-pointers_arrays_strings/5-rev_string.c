#include "holberton.h"

/**
 * rev_string - reverse string.
 * @s: string.
 */
void rev_string(char *s)
{
	int i = 0, x = 0, aux;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	while (i > x)
	{
		aux = s[i];
		s[i--] = s[x];
		s[x++] = aux;
	}
}
