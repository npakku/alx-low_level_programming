#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	argv = argv;
	if (argc >= 1)
	{
		argc = argc - 1;
	}
	printf("%d", argc);
	printf("\n");
	return (0);
}
