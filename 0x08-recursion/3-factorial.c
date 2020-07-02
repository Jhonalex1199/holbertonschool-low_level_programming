#include "holberton.h"

/**
 * factorial - factorial number.
 * @n: number to factorial
 * Return: factorial.
 */
int factorial(int n)
{
	if (n > 1)
		return (n * (factorial(n - 1)));
	if (n == 0)
		return (1);
	else
		return (-1);
}
