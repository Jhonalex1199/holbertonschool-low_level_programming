#include "holberton.h"

/**
 * _strcmp - Compare two strings.
 * @s1: 1 string.
 * @s2: 2 string.
 * Return: negative, positive or equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
