#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: string.
 */
void puts_half(char *str)
{
	int i, m, a, x;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		m = (i - 1) / 2;
	}
	else
	{
		m = i / 2;
	}
	a = i - m;
	for (x = a; x < i; x++)
	{
		_putchar (str[x]);
	}
	_putchar('\n');
}
