#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - fuction that executer a fuction given as a parameter.
 * @array: array.
 * @size: size.
 * @action: fuction pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		while (i = 0 < size)
			action(array[i]);
			i++;
	}
}
