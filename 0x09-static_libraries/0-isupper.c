#include "holberton.h"

/**
 * _isupper - check for uppercase character
 * @c: letter for uppercase check
 *
 * Return: 1 if isupper and 0 isn't isupper
 */
int _isupper(int c)
{
	int isupper;

	if (c >= 'A' && c <= 'Z')
		isupper = 1;
	else
		isupper = 0;
	return (isupper);
}
