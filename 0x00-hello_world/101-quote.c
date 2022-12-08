#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Result: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n", 58);
	return (1);
}
