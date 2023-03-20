#include <stdio.h>
#include "main.h"

/**
 * _strspn - returns number of bytes from initial segment of s
 * @s: the initial string
 * @accept: the string to search
 *
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
				}
			}
		}
		else
		{
			return (count);
		}
	}
	return (count);
}
