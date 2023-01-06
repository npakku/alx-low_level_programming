#include <stdio.h>
#include "main.h"

/**
 * factorial - find the factorial of a number
 * @n: the input number
 *
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
	return (0);
}
