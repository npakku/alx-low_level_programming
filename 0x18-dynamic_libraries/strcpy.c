#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies string to new destination
 * @dest: the destination
 * @src: the source
 * Return: Always 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
