#include <stdio.h>
#include "main.h"

/**
 * _memset - fills first n bytes of memory with values
 * @s: the memory pointed to by s
 * @b: the constant byte
 * @n: size of memory area to fill
 *
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
