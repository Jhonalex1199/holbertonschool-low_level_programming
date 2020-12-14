#include "lists.h"

/**
 * free_dlistint - function that free a list.
 * @head: input of the list.
 * Return: No return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ultimo = head;

	while (head != NULL)
	{
		head = head->next;
		free(ultimo);
		ultimo = head;
	}
	free(head);
}
