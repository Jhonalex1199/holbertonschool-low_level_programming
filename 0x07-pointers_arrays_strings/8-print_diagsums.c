#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square
 * @a : pointer
 * @size : square
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0, p = 0;
	int sum1 = 0, sum2 = 0;

	while (i < size)
	{

		sum1 += a[p];
		p += size + 1;
		i++;
	}
	i = 0;
	p = size - 1;
	while (i < size)
	{

		sum2 += a[p];
		p += size - 1;
		i++;
	}
	printf("%d, %d\n", sum1, sum2);

}
