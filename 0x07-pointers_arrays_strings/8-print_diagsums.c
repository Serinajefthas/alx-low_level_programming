#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of nums in diagonal in arrays
 * @a: input
 * @size: input
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i <= size; i++)
		sum1 = sum1 + a[i * size + i];

	for (j = size - 1; j >= 0; j++)
		sum2 = sum2 + a[j * size + (size - j - 1)];

	printf("%d, %d\n", sum1, sum2);
}
