#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds node at beginning
 * @head: pointer to pointer to head node
 * @n: integer part of the node
 *
 * Return: if function fails return 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
