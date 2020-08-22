#include "holberton.h"
#include <stdio.h>

/**
 *get_endianness - get the endianness.
 *Return: integer.
*/
int get_endianness(void)
{
	int x = 1;
	char *y = (char *) &x;

	if (*y)
	{
		return (1);
	}
	else
		return (0);
}
