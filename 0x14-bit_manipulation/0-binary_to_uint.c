#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - binary to number unsigned
 * @b: pointer.
 * Return: number converted.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == 0)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			i = i * 2 + 1;
		else
			i = i * 2 + 0;
		b++;
	}
	return (i);
}
