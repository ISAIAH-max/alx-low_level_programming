#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node
 *of a dlistint_t linked list
 *@head: A pointer to the head of Dlinked list
 *@index: index of the node returned
 *
 *Return: the node and return NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		index--;
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
