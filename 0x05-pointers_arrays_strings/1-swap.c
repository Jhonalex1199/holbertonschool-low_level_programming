#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: value to integer.
 * @b: value to integer.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
