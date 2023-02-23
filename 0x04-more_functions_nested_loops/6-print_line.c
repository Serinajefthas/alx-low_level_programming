#include "main.h"

/**
 * print_line - prints line of n length
 * @n: length of line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
