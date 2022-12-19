#include <unistd.h>

/**
 * _putchar - write character to stdout
 * @c: the character to write
 * Return: On success 1
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
