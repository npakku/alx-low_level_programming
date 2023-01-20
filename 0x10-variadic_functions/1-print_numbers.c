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
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
