#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);
	if (i != 0)
	{
		_putchar(s[i]);
		_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}
