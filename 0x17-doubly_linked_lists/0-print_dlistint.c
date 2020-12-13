#include "lists.h"

/**
 * print_dlistint - Prints all the elements.
 * @h: node.
 * Return: # de nodos.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if(h != NULL)
	{
		while(h != NULL)
		{
			printf("%d \n", h->n);
			h = h->next;
			i++;
		}
	} 
	else
	{
		return(EXIT_FAILURE);
	}
	return(i);
}