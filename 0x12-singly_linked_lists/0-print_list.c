#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: input head of singly linked list to print
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (n);
}

