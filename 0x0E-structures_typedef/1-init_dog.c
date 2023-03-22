#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises var of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	/*d = malloc(sizeof(struct dog)); - only if struct ptr not passed in as arg */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
