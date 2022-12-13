#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
