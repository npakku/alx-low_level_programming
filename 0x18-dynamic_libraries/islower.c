#include <stdio.h>
#include "main.h"

/**
 * _islower - prints if a character is lower
 * @le: input character
 * Return: Always 0 (succes)
 */

int _islower(int le)
{
	if (le >= 97 && le <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
