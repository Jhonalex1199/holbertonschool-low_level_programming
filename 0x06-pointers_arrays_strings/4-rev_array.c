#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
*@a : array
*@n : array value
*/
void reverse_array(int *a, int n)
{
	int i = 0, aux;

	n = n - 1;
	while (i <= n)
		aux = a[i];
		a[i++] = a[n];
		a[n--] = aux;
}
