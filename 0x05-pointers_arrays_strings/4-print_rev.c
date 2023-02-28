#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to reverse passed in as pointer
 */
void print_rev(char *s)
{
	int i, temp;

	int len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		/* temp variable use to temporary hold the string*/
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	printf("%s\n", s);
}
