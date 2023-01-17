#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialises an variable of type dog
 * @d: structur to initialise
 * @name: name to initialise with
 * @age: age of a dog to initialise with
 * @owner: name of the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
