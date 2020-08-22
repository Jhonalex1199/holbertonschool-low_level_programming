#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 * get_bit - Write a function that returns the value of index.
 * @index: index.
 * @n: bit value index.
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
