#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum arguments
 * @n: number arguments
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* argumentos */
	unsigned int i = 0, suma = 0; /*contadores*/

	va_start(args, n); /* iniciar function variadic */

	if (n == 0)
		return (0);

	while (i < n) /*recorrer argumentos*/
	{
		suma += va_arg(args, int);
		i++;
	}
	va_end(args); /*terminar function variadic */
	return (suma);
}
