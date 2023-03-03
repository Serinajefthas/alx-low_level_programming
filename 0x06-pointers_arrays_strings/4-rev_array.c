#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses content of array of ints
 * @a: an array of integers pointer
 * @n: the number of elements to array(to swap)
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
