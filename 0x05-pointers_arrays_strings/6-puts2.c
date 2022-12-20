#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character
 * @str: the input
 *
 * Return: Always 0 (success)
 */

void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
