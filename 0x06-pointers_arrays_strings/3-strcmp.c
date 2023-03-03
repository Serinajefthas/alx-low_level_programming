#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string one to compare
 * @s2: second string to compare with
 * Return: int of relationship between 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		;
	if (s1[i] == s2[i])
		return (0);

	return (*s1 - *s2);
}
