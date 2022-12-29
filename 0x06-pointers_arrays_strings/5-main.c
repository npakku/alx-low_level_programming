#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
