#include "lists.h"

/**
 * add_dnodeint - function that adds a new node.
 * @head: input of a list.
 * @n: data od the node.
 * Return: the new node at the beginning
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	else
	{
		(*head)->prev = new;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	return (new);
}
