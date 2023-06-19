#include "main.h"

/**
 * _strspn - finds length of prefix substring
 * @s: string to check
 * @accept: prefix to check for
 * Return: number of n bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int n = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
			n++;
	}
	return (n);
}
