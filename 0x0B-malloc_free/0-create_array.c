#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of char and initialize with specific character
 * @size: size of the array to allocate
 * @c: the character to initialize with the array
 *
 * Return: Always 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
