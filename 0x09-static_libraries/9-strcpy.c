#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies str that *src pointer points to
 * to buffer(memory slot used store data) *dest pointer points to
 * @dest: pointer that points to buffer
 * str copied to
 * @src: pointer which points to string to copy
 * Return: pointer to copied dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
