#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for dog
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
