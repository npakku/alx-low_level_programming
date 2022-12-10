#include <stdio.h>

/**
 * main - prints possible combo of single digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
