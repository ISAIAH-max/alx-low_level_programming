#include "lists.h"

/**
 *free_dlistint - function that free a dlistint_t list
 *@head: A pointer to the head of the dlinked list
 *
 *Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
