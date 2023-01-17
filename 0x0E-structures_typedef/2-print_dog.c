#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog details
 * @d: pointer to dog structure
 *
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		_putchar(' ');
	}
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nill)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nill)\n");
		}
	}
}

