#include "holberton.h"

/**
 * isupper - check for uppercase character
 *
 * return: check uppercase
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
