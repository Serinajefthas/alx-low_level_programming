#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate 2 strings
 * uses at most n bytes(characters) from src
 * src does not need be null terminated if contains n+ bytes
 * Return: pointer to resulting str dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	 = strlen(src);
	i = strlen(dest);

	for (i = strlen(dest); i < n; i++)
	{
		*dest = *src;
		dest++;
	}
	return (dest);
}
