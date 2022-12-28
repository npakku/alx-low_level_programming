#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Return: Always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	for (i = 0; i < n; i++)
	{
		dest[j + i]  = src[i];
	}
	return (dest);
}
