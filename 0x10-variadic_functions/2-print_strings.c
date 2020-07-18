#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @n: number arguments
 * @separator: character separator of numbers
 * Return: strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p_strings;
	unsigned int i = 0;
	char *str;

	va_start(p_strings, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(p_strings, char *));
		if (str)
			printf("%s", str);
		if (!str)
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p_strings);
}
