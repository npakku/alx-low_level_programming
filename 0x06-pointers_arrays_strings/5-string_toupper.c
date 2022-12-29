#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes string to upper
 * @s: the input string
 *
 * Return: Always 0 (success)
 */

char *string_toupper(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if ((s[j] >= 97) && (s[j] <= 122))
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
