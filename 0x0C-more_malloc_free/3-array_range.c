#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of ints
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
