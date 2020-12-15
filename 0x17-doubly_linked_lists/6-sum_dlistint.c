#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: input of a list.
 * Return: the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *ultimo = head;

	if (head == NULL)
	{
		return (0);
	}
	while (ultimo != NULL)
	{
		count += ultimo->n;
		ultimo = ultimo->next;
	}
	return (count);
}
