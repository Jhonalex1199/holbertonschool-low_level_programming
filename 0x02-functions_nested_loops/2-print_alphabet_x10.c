#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch = 'a';
int i=1;
        for (i=1; i<=10; i++)
	{
        for (ch = 'a'; ch <= 'z'; ch++)
        {
        _putchar(ch);
        }
	_putchar('\n');
        } 
}
