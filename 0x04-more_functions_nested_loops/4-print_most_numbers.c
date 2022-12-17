#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print most of the numbers from 0 to 10
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
