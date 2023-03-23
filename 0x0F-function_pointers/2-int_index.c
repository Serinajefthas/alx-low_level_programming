#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for int
 * @array: array to search
 * @size: size array
 * @cmp: pointer to search function
 * Return: index first element where cmp
 * doesnt return 0 (ie ints match)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

