#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: Always 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
