#include "lists.h"
#include <stdio.h>

/**
 *add_dnodeint_end - function that adds a new node at the end
 *of a dlistint_t list
 *@head: A double pointer to the head of the Dlinked list
 *@n:The node added
 *
 *Return:the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newList, *tmp;

	if (head == NULL)
		return (NULL);
	newList = malloc(sizeof(dlistint_t));
	if (newList == NULL)
		return (NULL);
	newList->n = n;
	newList->next = NULL;
	if (*head == NULL)
	{
		newList->prev = NULL;
		*head = newList;
		return (newList);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newList;
	newList->prev = tmp;
	return (newList);
}
