#include "main.h"
#include <string.h>

/**
 * _strchr - find character in string s
 * @s: string to locate char
 * @c: char to locate
 * Return: pointer to first occurence of c in str s/NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
