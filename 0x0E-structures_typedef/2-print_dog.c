#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print dog members
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = atoi("(nil)");
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
