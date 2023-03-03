#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate 2 strings
 * uses at most n bytes(characters) from src
 * src does not need be null terminated if contains n+ bytes
 * @dest: concatenated string
 * @src: string to add to dest string
 * @n: number bytes (ie characters) from src string
 * Return: pointer to resulting str dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
