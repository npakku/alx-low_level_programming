#include "lists.h"

/**
 * list_len - counts all the elements of a list_t list
 * @h: input head of singly linked list
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
