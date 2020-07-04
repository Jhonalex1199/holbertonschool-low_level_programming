#include "holberton.h"

/**
 * _strlen - length of a string.
 * @s: string.
 * Return: Always i..
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
