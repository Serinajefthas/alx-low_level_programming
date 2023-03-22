#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print dog members
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? (d->name) : "(nil)");
		printf("Age: %.6f\n", (d->age) ? (d->age) : (0));
		printf("Owner: %s\n", (d->owner) ? (d->owner) : "(nil)");
		/*printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner); */	
	}
}
