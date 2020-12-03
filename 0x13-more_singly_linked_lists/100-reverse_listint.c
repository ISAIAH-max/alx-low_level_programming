#include "lists.h"

/**
 *reverse_listint - A function that reverses a listint_t linked list.
 *@head: A pointer to the address of the head of the list_t list.
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *rev;

	if (head == NULL || *head == NULL)
		return (NULL);

	rev = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = ahead;
	}

	(*head)->next = rev;

	return (*head);
}
