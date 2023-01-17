#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * struct dog - stores information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */ 
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
