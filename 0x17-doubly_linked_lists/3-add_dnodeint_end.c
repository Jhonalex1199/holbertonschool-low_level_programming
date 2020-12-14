#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of list.
 * @head: input of a list.
 * @n: data of the node.
 * Return: the new node at the beginning
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ultimo = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (ultimo == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		ultimo = new;
		*head = new;
	}
	else
	{
		while ((ultimo)->next != NULL)
		{
			ultimo = ultimo->next;
		}
		new->prev = ultimo;
		ultimo->next = new;
		new->next = NULL;
		new->n = n;
	}
	return (new);
}
