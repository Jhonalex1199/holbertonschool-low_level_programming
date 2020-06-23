#include "holberton.h"

/**
 * _puts - prints a string
 * @str: validate the character.
 * Return: Always i.
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
