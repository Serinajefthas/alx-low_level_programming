#include "main.h"

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
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
