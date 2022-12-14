#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of input number
 *
 * @n: input character
 * Return: Always 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);

}
