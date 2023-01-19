#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers in variadic function
 * @separator: the symbo separating the numbers
 * @n: the number of arguments
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;
	char *sep;

	if (separator == NULL || *separator == 0)
	{
		sep = "";
	}
	else
	{
		sep = (char *)separator;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf(" %d", x);
		if (i != n - 1)
		{
			printf("%c", *sep);
		}
	}
	putchar('\n');
	va_end(args);
}
