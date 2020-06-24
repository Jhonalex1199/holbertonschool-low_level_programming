#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: string.
 */
void puts_half(char *str)
{
	int i, m;
	
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
	for (; m < i; m++)
	{
		_putchar (str[m]);
	}
	_putchar('\n');
}
