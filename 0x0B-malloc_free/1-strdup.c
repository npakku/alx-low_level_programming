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
		return (NULL);
	while (str[i] != '\0')
		i = i + 1;
	i = i + 1;
	ar = malloc(sizeof(*ar) * i);
	if (ar == NULL)
		return (NULL);
	while (j < i)
	{
		ar[j] = str[j];
		j = j + 1;
	}
	return (ar);

}
