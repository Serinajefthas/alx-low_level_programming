#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates mem using malloc
 * @b: amt of memory
 * Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *n = malloc(sizeof(int) * b);

	if (n == NULL)
	{
		exit (98);
	}
	return (n);
}
