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
	long unsigned int i;
	
	char *arr = malloc(sizeof(int) * strlen(str));
	
	if (arr == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		arr[i] = str[i];

	return (arr);
}
