#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a pointer to a new dog in memory
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: var of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len_name = strlen(name);
	int len_owner = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
		return (NULL);
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
