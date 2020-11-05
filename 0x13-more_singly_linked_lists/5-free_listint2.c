#include "lists.h"

/**
 *free_listint2-A function that frees a listint_t list.
 *@head:A double pointer that points the head of a LinkedList
 *Return:Void
*/

void free_listint2(listint_t **head)
{
	listint_t *node;

	node = *head;

	while (node != NULL)
	{
		node = node->next;
	}
	*head = NULL;
}
