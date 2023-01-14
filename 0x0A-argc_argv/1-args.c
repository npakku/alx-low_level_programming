#include <stdio.h>

/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector
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
	printf("%d\n", argc);
	return (0);
}
