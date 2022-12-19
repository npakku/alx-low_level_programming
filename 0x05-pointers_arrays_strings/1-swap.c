#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two integers
 * @x: first input
 * @y: second input
 * Return: Always 0 (success)
 */

void swap_int(int *x, int *y)
{
	int tmp;

	tmp = *y;
	*x = *y;
	*y = tmp;
}
