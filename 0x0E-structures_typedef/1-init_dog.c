#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initialize variable of type struct dog.
 *@d: pointer to struct dog.
 *@name: name of the dog.
 *@age: the age of the dog.
 *@owner: the dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
