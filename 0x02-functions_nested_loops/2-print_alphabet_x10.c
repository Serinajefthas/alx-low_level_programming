#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	int n = 97;
	int i = 0;

	while (i < 10)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
