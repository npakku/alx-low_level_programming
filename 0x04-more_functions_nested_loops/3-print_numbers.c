#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers in a range
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
