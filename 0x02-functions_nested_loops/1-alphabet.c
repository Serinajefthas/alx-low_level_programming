#include "main.h"
/**
 * print_alphabet - Entry point
 * print alphabet w a function not just main
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
