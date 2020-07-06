#include "holberton.h"
#include <stdio.h>

/**
 * main - print numbers of argumentos.
 * @argc: string
 * @argv: string
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		if (i + 1 == argc)
		{
			printf("%i\n", i);
		}
	i++;
	return(0);
}
