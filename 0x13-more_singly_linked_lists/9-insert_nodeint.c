#include "lists.h"

/**
 *insert_nodeint_at_index- A function that inserts a new node at
 *a given position
 *@head:A double pointer that points the head of a LinkedList
 *@idx: The index where the new node is placed
 *@n: The integer inserted
 *Return:the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *old, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		old = *head;
		for (i = 0; i < idx - 1 && old != NULL; i++)
		{
			old = old->next;
		}
		if (old == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = old->next;
	old->next = new_node;
	return (new_node);

}
