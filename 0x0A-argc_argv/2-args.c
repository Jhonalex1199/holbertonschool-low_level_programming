#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: 1.
 * @argv: 2.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
