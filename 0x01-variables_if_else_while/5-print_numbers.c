#include <stdio.h>

/**
 * main - prints single digit numnbers of base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i % 10);
	}
	putchar('\n');
	return (0);
}
