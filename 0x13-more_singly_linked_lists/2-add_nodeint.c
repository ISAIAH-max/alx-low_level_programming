#include "lists.h"

/**
 *add_nodeint- A function that adds a node at the beginning of a
 *LinkedList
 *@head:Double pointer to the head of the LinkedList
 *@n:Added int
 *Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
