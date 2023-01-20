#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print some strings
 * @separator: pointer to constant
 * @n: number of arguments
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *words;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(ap, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
