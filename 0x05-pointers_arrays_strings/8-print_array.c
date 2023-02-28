#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array to print
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if(n <= 0)
			break;

		else if (i == (n - 1))
		{
			printf("%d\n", a[i]);
			break;
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
