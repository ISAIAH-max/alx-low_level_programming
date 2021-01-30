#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all
 *the data (n) of a dlistint_t linked list
 *@head: a pointer to the header of the Dlinked list
 *
 *Return: Sum of all the data of Dlinked list and 0 if
 *Dlinked list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
