#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints some character using recursion
 * @s: the string to print
 *
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
