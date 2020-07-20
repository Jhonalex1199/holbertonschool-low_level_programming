#include"variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * prin_char - print char.
 * @list: char to print.
 */
void prin_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * prin_integer - print integer.
 * @list: int to print.
 */
void prin_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * prin_float - print float.
 * @list: float to print.
 */
void prin_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * prin_string - print string.
 * @list: string to print.
 */
void prin_string(va_list list)
{
	char *ptr;

	ptr = va_arg(list, char *);
	if (ptr == NULL)
		ptr = "(nil)";
	printf("%s", ptr);
}
/**
 * print_all - print all.
 * @format: ist of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	prin_t direc[] = {
		{"c", prin_char},
		{"i", prin_integer},
		{"f", prin_float},
		{"s", prin_string},
		{NULL, NULL}
	};
	int i = 0, j;
	char *separator = "";

	va_start(list, format);
while (format != NULL && format[i] != '\0')
{
	j = 0;
	while (j < 4)
	{
		if (format[i] == *(direc[j].data))
		{
			printf("%s", separator);
			direc[j].fun(list);
			separator = ", ";
			break;
		}
		j++;
	}
	i++;
}
printf("\n");
va_end(list);
}
