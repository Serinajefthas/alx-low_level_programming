#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer pointing to the constant byte
 * @b: the constant byte/var
 * @n: the number of bytes (ie characters)
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
