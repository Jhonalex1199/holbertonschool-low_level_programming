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
	char *p;
	unsigned int i;
	size_t count = 0;

	while (h)
	{
		p = h->p;
		i = h->i;

		if (p == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i, p);
		h = h->next;
		count++;
	}
	return (count);
}
