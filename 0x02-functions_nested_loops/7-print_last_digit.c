#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input number to extract last digit from
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last;

	last = (n % 10);
	if (n < 0)
	{
		last = (-last);
	}
	_putchar(last + '0');
	return (last);
}
