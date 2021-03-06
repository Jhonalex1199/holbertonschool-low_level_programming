#include "lists.h"

/**
 * listint_len - function that get the length of a list.
 * @h: linked list.
 * Return: i.
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
