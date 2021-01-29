#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len-function that returns the number of elements
 *in a linked dlistint_t list
 *@h:A pointer to Dlink list
 *
 *Return:the number of elements 
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

        for(i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
