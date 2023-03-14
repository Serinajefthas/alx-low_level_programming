#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates and initialises char array
 * @size: size of array
 * @c: char to initialise array w
 * Return: NULL if sizze=0 or ptr to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
