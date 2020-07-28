#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - print all elements.
 * @h: list name.
 * Return: all elements.
 */
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	size_t count = 0;

	while (h)
	{
		str = h->str;
		len = h->len;

		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", len, str);
		h = h->next;
		count++;
	}
	return (count);
}
