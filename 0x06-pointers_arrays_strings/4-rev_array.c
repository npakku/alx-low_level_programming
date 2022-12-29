#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input array
 * @n: size of array
 *
 * Return: Always 0 (success)
 */

void reverse_array(int *a, int n)
{
	int j, l;
	int tmp;

	j = 0;
	l = n / 2;
	n = n - 1;
	while (n >= l)
	{
		tmp = a[j];
		a[j] = a[n];
		a[n] = tmp;
		n--;
		j++;
	}
}
