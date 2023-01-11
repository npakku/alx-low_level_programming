#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - keeps a copy of the string in new array
 * @str: the input string to make copy
 *
 * Return: Always 0
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *ar;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
		i++;

	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		ar[j] = str[j];
	}
	ar[j + 1] = 0;
	return (ar);
}
