#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sum of a list.
 * @head: head node.
 * Return: sum of the data of a list.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
