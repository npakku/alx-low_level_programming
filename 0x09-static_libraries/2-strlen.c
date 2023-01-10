#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length of string
 * @s: the input string
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}
