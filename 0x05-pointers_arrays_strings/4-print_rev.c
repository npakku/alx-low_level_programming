#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the string to reverse
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
