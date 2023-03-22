#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a pointer to a new dog in memory
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: var of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (dog1 == NULL)
		return (NULL);
	dog1 = malloc(sizeof(struct dog));
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
