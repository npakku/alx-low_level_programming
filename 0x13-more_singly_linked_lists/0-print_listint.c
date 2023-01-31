#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints elements in linked list
 * @h: pointer to structure
 *
 * Return: nothing
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count = count + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
