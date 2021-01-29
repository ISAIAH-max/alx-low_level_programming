#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_dnodeint-A pointer function that adds a new node at the beginning
 *of a dlistint_t list
 *@head:A double pointer to the head
 *@n:The integer add at the beginning of the list
 *
 *Return:the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newList;

	if (head == NULL)
		return (NULL);
	newList = malloc(sizeof(dlistint_t));
	if (newList == NULL)
		return (NULL);
	newList->n = n;
	newList->prev = NULL;
	newList->next = *head;
	*head = newList;
	if (newList->next != NULL)
		(newList->next)->prev = newList;
	return (newList);
}
