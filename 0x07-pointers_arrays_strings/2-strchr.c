#include "holberton.h"

/**
 * _strchr - prints buffer in hexa
 * @s: buffer
 * @c: buffer2
 *
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	i++;
	}
	s = 0;
	return (s);
}
