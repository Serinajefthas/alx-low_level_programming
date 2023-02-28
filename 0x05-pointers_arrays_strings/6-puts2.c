#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every second character of a string
 * @str: the pointer which points to string to be printed
 */
void puts2(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
