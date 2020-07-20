#ifndef FUNCTION
#define FUNCTION

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct prin_t
{
	char *data;
	void (*fun)(va_list);
} prin_t;
void prin_char(va_list ch);
void prin_integer(va_list in);
void prin_float(va_list fl);
void prin_string(va_list str);
#endif
