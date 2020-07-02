#include "holberton.h"
#include <stdio.h>

/**
 * calraiz - natural square root of a number.
 * @n: number.
 * @i: divisor.
 * Return: square root.
 */
int calraiz(int n, int i)
{
	if (n / i == i)
	{
	return (i);
	}
	if (n / i < i)
	{
		return (-1);
	}
	i = calraiz(n, i + 1);
	return (i);
}
/**
 * _sqrt_recursion - natural square root of a number.
 * @n: number.
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (calraiz(n, i));
}
