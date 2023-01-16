#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of type dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: creates a structure dog with member variables
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

dog_t *new_dog(char *name, float, char *owner);
#endif
