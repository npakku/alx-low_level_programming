#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through arrays and print them
 * @array: the array of elements
 * @size: size of array
 * @action: function pointer
 *
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
