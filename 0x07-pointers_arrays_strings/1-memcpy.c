#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
