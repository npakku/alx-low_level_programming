#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: the source string
 * @n: the number of bytes to cut
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
