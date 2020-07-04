#include "holberton.h"

/**
 * _strncat - concatenate two strings.
 * @dest: destinate.
 * @src: string 2.
 * @n: n bytes.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld = 0, ls = 0, ln = 0;

	while (dest[ld] != '\0')
		ld++;
	while (src[ls] != '\0')
		ls++;
	while (ln <= ls)
	{
		if (n > 0)
		{
			dest[ld++] = src[ln++];
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
