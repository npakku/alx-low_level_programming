#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints diagonal sum of a matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int reSum;
	int leSum;

	reSum = 0;
	leSum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == size - 1)
			{
				leSum = leSum + a[i][j];
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				reSum = reSum + a[i][j];
			}
		}
	}
	printf("%d, %d", leSum, reSum);
}
