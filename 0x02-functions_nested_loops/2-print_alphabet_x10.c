#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch = 0;
int i = 0;
        for (i = 1; i <= 10; i++)
	{
        	for (ch = 97; ch <= 122; ch++)
        	{
        		_putchar(ch);
        	}
		ch = 97;
		_putchar('\n');
	} 
}
