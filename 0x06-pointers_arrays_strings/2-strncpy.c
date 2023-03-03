#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies src str to dest str,
 * @dest: pointer to copy to
 * @src: pointer to copy
 * @n: number charcaters from src to add to dest
 * Return: pointer to concat final str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
