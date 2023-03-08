#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
		i++;
	}
	else
		_putchar('\n');
}
