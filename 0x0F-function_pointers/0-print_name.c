#include "fuction_pointers.h"
#include <stdio.h>

/**
 * print_name - print name.
 * @name: name,
 * @f: pointer function.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f !=NULL)
		f(name);
}
