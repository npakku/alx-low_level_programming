#ifndef LISTS_H
#define LISTS_H

/* Included Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structs */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function Prototypes */
/* declaration of function to print all elements of a list_t list */
size_t print_list(const list_t *h);

/* declaration of function to count all elements of a list_t list */
size_t list_len(const list_t *h);

/* declaration of function to add a node to the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);

/* declaration of function to add a node to the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);

/* declaration of function to determine length of string */
int string_length(const char *s);

/* declaration of function to free a list_t list */
void free_list(list_t *head);

#endif
