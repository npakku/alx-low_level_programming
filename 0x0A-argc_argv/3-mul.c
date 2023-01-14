#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;

	argc = argc;
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);

}
