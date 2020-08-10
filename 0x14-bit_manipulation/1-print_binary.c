#include "holberton.h"
#include <stdio.h>

/**
* print_binary - print binary to n.
* @n: number.
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
		putchar ((n & 1) + '0');
	else

		putchar (n + '0');
}