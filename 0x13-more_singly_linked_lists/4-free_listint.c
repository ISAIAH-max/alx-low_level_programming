#include "lists.h"

/**
 *free_listint- A function that frees a Linked list
 *@head: A head pointer that points to the head of a
 *Linked list
 *Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
