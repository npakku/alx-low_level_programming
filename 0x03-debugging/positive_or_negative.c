#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - tests the number
 * @n: the input
 * Return: Always 0 (success)
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
