#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates dest str w src str,
 * then adds terminating null byte
 * @dest: pointer to str to append to
 * @src: pointer to str to add to other str
 * dest = dest + src
 * Return: pointer to concat final str
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
