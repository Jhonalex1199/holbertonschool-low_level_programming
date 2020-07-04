#include "holberton.h"

/**
 * _isdigit - check for a digit
 * @c: checker for digit
 *
 * Return: 1 if is a digit and 0 isn't
 */
int _isdigit(int c)
{
	int isdigit;

	if (c >= '0' && c <= '9')
		isdigit = 1;
	else
		isdigit = 0;

	return (isdigit);
}
