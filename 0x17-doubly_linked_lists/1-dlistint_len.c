#include "lists.h"

/**
 * dlistint_len - Prints number of the elements.
 * @h: node.
 * Return: # de nodos.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
