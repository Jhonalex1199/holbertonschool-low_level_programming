#include "holberton.h"

/**
 * rot13 - Function that reverses the content of an array of integers.
 * @str: s is the array.
 * Return: Always str.
 */
char *rot13(char *str)
{
	int i, k;
	char s[52] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (str[i] == s[k])
			{
				str[i] = s1[k];
				break;
			}
		}
	}
	return (str);
}
