#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any num of same chars
 * @s: string to search
 * @accept: string/chars to look for
 * Return: str remaining once same chars removed
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
