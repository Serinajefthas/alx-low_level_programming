#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: num bytes of s2 to concat
 * Return: pointer to new space in mem w concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(n);;
	int len;

	if (s1 == NULL)
	{
		s1 = "";
		s1_len = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
		s2_len = 0;
	}
	if (n >= strlen(s2))
	{
		s2_len = strlen(s2);
		n = s2_len;
	}

	len = s1_len + n + 1;
	s = malloc(sizeof(int) * len);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[s1_len + i] = s2[i];
	s[len - 1] = '\0';

	return (s);
}
