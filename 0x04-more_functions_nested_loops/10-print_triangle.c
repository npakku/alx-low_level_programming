#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int i;
	int j;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + i) < (size - 1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
