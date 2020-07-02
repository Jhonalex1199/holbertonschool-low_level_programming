#include "holberton.h"

/**
 * _strlen_recursion - length of a string.
 * @s: string.
 * Return: i.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	return (i);
	}
	else
	{
		return (i);
	}
}
