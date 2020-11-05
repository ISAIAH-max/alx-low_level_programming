#include "lists.h"

/**
 *get_nodeint_at_index- A function that returns the nth node of a LinkedList
 *@head: A pointer that that points the head of a inkedList
 *@index:Index of the the node returned
 *Return:nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
