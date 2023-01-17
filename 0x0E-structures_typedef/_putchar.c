#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the character
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
