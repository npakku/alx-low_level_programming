#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - initializes a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, a;
	dog_t *ptr;

	i = j = 0;
	while (name[i++])
		;
	while (owner[j++])
		;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(ptr->name) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		ptr->name[i] = name[i];
	}
	ptr->age = age;
	ptr->owner = malloc(sizeof(ptr->owner) * j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < j; a++)
	{
		ptr->owner[i] = owner[i];
	}
	return (ptr);
}
