#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * Return: pointer new concat string
 */
char *str_concat(char *s1, char *s2)
{
	int i;

	int s1_len = strlen(s1);

	int s2_len = strlen(s2);

	int len = strlen(s1) + strlen(s2) + 1;
	/*
	 * + 1 is space for null terminator
	 * strlen doesnt include null terminator
	 */
	char *s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		s1 = "";
		strlen(s1) = 1;
	}
	if (s2 == NULL)
	{
		s2 = "";
		strlen(s2) = 1;
	}

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		s[strlen(s1) + i] = s2[i];

	s[len - 1] = '\0';

	return (s);
}
