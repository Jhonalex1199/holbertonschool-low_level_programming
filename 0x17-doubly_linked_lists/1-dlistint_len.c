#include "lists.h"

/**
 * print_dlistint - Prints all the elements.
 * @h: node.
 * Return: # de nodos.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
