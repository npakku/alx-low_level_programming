#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - returns substring starting from first occurence of second string
 * @s: the string to search
 * @accept: the string to find first matching character
 *
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
