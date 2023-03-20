#include <stdio.h>
#include "main.h"

/**
 * _puts - prints some strings
 * @str: the string to print out
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
