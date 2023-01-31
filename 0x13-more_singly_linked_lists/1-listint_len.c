#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of nodes
 * @h: pointer to the head node
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}


