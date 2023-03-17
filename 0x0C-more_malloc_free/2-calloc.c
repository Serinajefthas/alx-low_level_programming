#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: number elements
 * @size: size (bytes) of each element
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = size;
	return (array);
}
