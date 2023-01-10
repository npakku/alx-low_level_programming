#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: the destination memory location
 * @src: the source memory location
 * @n: number of bytes to copy
 *
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
