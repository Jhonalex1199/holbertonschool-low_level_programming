#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int a;
int i;
        for (i = 0; i < 10; i++)
	{
        	for (a = 'a'; a <= 'z'; a++)
        		_putchar(a);
		_putchar('\n');
	}
}
