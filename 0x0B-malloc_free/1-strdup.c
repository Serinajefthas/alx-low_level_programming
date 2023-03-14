#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - newly allocated space
 * @str: pointer to existing str
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	int i;

	int len = strlen(str);

	char *arr = malloc(sizeof(int) * len);

	if (str == NULL)
		return ("failed to allocate memory");

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];

	return (arr);
}
