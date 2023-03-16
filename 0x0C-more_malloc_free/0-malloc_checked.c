#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates mem using malloc
 * @b: amt of memory
 * Return: ptr to allocated memory (same
 * as method return type, ie void)
 */
void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
