#include <stdio.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the string to reverse
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		printf("%c", s[i]);
		i--;
	}	
	printf("\n");
}
