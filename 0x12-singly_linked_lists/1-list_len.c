#include "lists.h"

/**
 *list_len- A function that gives the numbers of elements in a list
 *@h: A pointer to the head of the list
 *Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	int x = 0;
	const list_t *p;

	p = h;
	while (p)
	{
		p = p->next;
		x++;
	}
	return (x);
}
