#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if a character is digit
 * @c: input to the function
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
