#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string to encode
 * Return: new coded string
 */
char *rot13(char *n)
{
	int i, j;

	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == str1[j])
			{
				n[i] = rot13[j];
				break;
			}
		}
	}
	return (n);
}
