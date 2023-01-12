#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check memory allocation
 * @b: the size of memory to allocate
 *
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
