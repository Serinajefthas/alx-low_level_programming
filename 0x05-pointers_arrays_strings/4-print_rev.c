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

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
