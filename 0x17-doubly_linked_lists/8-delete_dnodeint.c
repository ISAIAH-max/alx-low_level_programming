#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes the node at
 *index index of a dlistint_t linked list
 *@head: A double pointer to the head of Dlinked list
 *@index:  the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
		{
			ptr->next->prev = NULL;
		}
		free(ptr);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	free(ptr);
	return (1);
}
