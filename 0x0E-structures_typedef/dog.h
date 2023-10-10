#ifndef DOG_H
#define DOG_H

/**
 *struct dog - details to a dog.
 *@name: what is the dog called.
 *@age: how old the dog is.
 *@owner: who does the dog belong to.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
