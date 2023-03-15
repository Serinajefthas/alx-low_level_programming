#include "main.h"
#include <string.h>

/**
 * string_toupper - converts all lowercase to uppercase
 * @n: string to convert
 * Return: pointer to string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
