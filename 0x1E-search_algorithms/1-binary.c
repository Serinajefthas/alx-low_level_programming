#include "search_algos.h"

/**
 * binary_search - searches array using binary algo
 * @array: pointer to first element in array
 * @size: number elements in array
 * @value: value to search for
 * Return: index of value, else -1
 */
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
        size_t mid, l, r, i;

        if (array == NULL)
		return (-1);
	/* r, l, mid are all array indices, not array values*/
        l = 0;
        r = size - 1;
        while (l <= r)
        {
                mid = l + (r - l) / 2;
                printf("Searching in array: ");
                for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (value == array[mid])
                        return (mid);
                else if (value > array[mid])
                        l = mid + 1;
                else
                        r = mid - 1;
        }
        return (-1);
}
