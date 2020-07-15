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
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i++]);
		}
	}
}
