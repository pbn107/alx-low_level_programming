#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the the properties of a dog
 * @d: pointer to the variable of type dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
