#include "main.h"

/**
 * cap_string - capitalises all first characters in a string
 * @n: string to capitalize
 * Return: the capitalised string
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (!(n[i] >= 'a' && n[i] <= 'z')
			i++;
		if (n[i - 1] == ' ' || n[i - 1] == '\t' ||
	   	n[i - 1] == '\n' || n[i - 1] == ',' ||
		n[i - 1] == ';' || n[i - 1] == '.' ||
		n[i - 1] == '!' || n[i - 1] == '?' | n[i - 1] == '"' ||
		n[i - 1] == '(' || n[i - 1] == ')' ||
		n[i - 1] == '{' || n[i - 1] == '}' || i == 0)
			n[i] = n[i] - 32;
	}
	return (n);
}	
