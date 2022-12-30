#include <stdio.h>
#include "main.h"

/**
 * leet - encodes the strings
 * @s: the input string
 *
 * Return: Always 0 (success)
 */

char *leet(char *s)
{
	char *r = s;
	int i;
	char le[] = {'a', 'e', 'o', 't', 'l'};
	char re[] = {4, 3, 0, 7, 1};

	i = 0;
	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == le[i] || *s == s[i] - 32)
			{
				*s = re[i] + '0';
			}
		}
		s++;

	}
	return (r);
}
