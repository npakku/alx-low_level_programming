#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the arguments of the function
 * @n: the last named argument
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list data;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(data, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum = sum + va_arg(data, int);
	va_end(data);
	return (sum);
}
