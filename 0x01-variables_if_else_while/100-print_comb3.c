#include <stdio.h>

/**
 * main - prints possible combination of two digits
 *
 * Return: Always 0 (0);
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)\
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
