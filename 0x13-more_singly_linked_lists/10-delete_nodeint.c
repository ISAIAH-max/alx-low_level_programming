#include "lists.h"

/**
 *delete_nodeint_at_index-function that deletes the node at index
 *index of a listint_t linked list.
 *@head:A double pointer that points to the head of a LinkedList
 *@index:The index of the node deleted
 *Return:1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	old = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (old->next == NULL)
			return (-1);
		old = old->next;
	}
	next = old->next;
	old->next = next->next;
	free(next);
	return (1);
}
