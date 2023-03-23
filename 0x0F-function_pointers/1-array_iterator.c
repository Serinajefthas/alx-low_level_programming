#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function as each element of arr
 * @array: array
 * @size: size of array
 * @action: pointer to function that
 * performs operation on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
