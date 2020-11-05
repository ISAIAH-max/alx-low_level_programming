#include "lists.h"

/**
 *pop_listint- A function that delete the head of LinkedList
 *@head:A double pointer that points the head of a LinkedList
 *Return:the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	n = node->n;
	node = NULL;
	return (n);

}
