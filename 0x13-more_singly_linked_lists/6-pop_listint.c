#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - delete the head of nodes
 * @head: head node.
 * Return: i.
*/
int pop_listint(listint_t **head)
{
listint_t *ptrtemp;
int i;

if (*head != NULL)
{
	ptrtemp = *head;
	*head = (*head)->next;
	i = ptrtemp->n;
	free(ptrtemp);
	return (i);
}
return (0);
}
