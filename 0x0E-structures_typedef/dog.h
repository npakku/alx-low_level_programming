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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float, char *owner);
void print_dog(struct dog *d);
int _putchar(int c);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
