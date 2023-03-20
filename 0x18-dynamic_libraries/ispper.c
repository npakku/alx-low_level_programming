#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if input character is upper
 *
 * @c: input character to check
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
