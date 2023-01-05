#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: the character to print
 * Return: on sucess 1
 * on error,-1 is returned and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
