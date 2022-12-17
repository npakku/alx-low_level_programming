#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line based on input
 * @n: length of line to print
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('-');
	}
	_putchar('\n');

}
