#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees memory allocated to a variable of type do
 * @d: pointer to a variable to be freed
 */

void free_dog(dog_t *d)
{
	free(d);
}
