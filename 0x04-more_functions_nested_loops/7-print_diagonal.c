#include <stdio.h>
#include "main.h"

/**
 * print_diagonal
 * @n: length of diagonal to print
 *
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else if (j < i)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
