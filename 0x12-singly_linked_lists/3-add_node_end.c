#include "lists.h"

/**
 * add_node_end - add element as a new node at the end of list_t list
 * @head: input head of singly linked list to add node to
 *
 * @str: input character string to add to list_t list
 *
 * Return: pointer to newly added element of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new =  malloc(sizeof(list_t));
	list_t *mover = (*head);

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = string_length(str);
	new->next = NULL;
	if (mover == NULL)
	{
		(*head) = new;
		return (*head);
	}
	while (mover->next != NULL)
		mover = mover->next;
	mover->next = new;
	return (*head);
}

/**
 * string_length - determines the length of a string
 * @s: input character string to determine length of
 *
 * Return: integer count of length
 */

int string_length(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}
