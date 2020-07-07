#include "holberton.h"
#include <stdio.h>

/**
 * main - prints buffer in hexa
 * @argc: he number of command line arguments
 * @argv: An array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i = 1, n1 = 0, n1 = 0;

	if (argc != 3)
	{
		printf("Error\n");
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = ((n1) * (n2));
	printf("%d\n", i);
	return (0);
}
