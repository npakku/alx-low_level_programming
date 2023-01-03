#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate first occurence of character
 * @s: the string
 * @c: the character to locate
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
