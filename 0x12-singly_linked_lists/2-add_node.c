#include "lists.h"

/**
 *_strlen- A function that gets the length of a string
 *@s: string used
 *Return:Length of a string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 *add_node - A function that add a node at the
 *bigining of the linked list
 *@head: A ponter to the head of the string
 *@str: String used
 *Return:The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = _strlen(str);
	list_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
