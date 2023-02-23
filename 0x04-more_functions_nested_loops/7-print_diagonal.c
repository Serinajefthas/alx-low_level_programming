#include "main.h"

/**
 * print_diagonal prints a diagonal
 * @n: length of disgonal
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
	
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (j == i)
					_putchar('\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
