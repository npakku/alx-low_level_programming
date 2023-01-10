#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of input
 *
 * @n: input to test
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
