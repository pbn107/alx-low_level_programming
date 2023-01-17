#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - initialises a new variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer to the variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
