#include <stdio.h>
#include "main.h"

/**
 * _strstr - find string inside another string
 * @haystack: the string to look into
 * @needle: the search string
 *
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != s)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
