#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _abs(int a)
{
	if ( a > 0 ) 
	{
		return(a);
	} else {
		a = a * (-1);
		return(a);
	}
}
