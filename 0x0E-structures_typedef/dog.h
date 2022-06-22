
#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - defines new struct
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: owner
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
