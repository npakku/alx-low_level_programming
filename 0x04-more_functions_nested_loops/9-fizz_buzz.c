#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints numbers 
 *
 * Return: Always 0 (success)
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else 
		{
			printf("%d", i);
		}
		printf(" ");
	}
}
