#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node.
 * @head: input of a list.
 * @index: number of node of the list.
 * Return: the index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ultimo = head;

	if (head == NULL)
	{
		return(NULL);
	}

	while (index > i)
	{
		ultimo = ultimo->next;
		i++;
	}
	return (ultimo);
}
