#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint-function that prints all the elements of a dlistint_t list.
 *@h:Double linked list header
 *
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
