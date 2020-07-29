#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * add_nodeint - add nodes.
 * @head: name of the list
 * @n: number.
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	add = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
