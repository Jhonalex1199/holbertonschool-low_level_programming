#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string destination.
 * @src: 2 string.
 * Return: @dest.
 */
char *_strcat(char *dest, char *src)
{
	int ld = 0, ls = 0;

	while (dest[ld] != '\0')
		ld++;
	while (src[ls] != '\0')
		dest[ld++] = src[ls++];

	return (dest);
}
