#include "lists.h"
#include <stdio.h>
/**
 *print_list- A function that prints elements
 *@h: Pointer to the start of the list
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int x = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		h = h->next;
		x++;
	}
	return (x);
}
