#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers.
 * @n: number arguments
 * @separator: character separator of numbers.
 * Return: va_list.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list p_args;
	va_start(p_args, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d%s", va_arg(p_args, int), separator);
		}
		else
			printf("%d", va_arg(p_args, int));
	}
	printf("\n");
	va_end(p_args);
}
