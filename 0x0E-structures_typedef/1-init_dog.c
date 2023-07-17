#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}