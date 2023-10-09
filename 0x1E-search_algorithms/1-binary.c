#include "search_algos.h"

/**
 * binary_search - searches array using binary algo
 * @array: pointer to first element in array
 * @size: number elements in array
 * @value: value to search for
 * Return: index of value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, l, r;

	l = mid = array[size -1];
	r = array[0];
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = 0; i <= mid; i++)
		{
			if (i == mid)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = l + (r -1) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
