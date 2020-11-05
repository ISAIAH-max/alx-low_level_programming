#include "lists.h"

/**
 *pop_listint- A function that delete the head of LinkedList
 *@head:A double pointer that points the head of a LinkedList
 *Return:the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);

}
