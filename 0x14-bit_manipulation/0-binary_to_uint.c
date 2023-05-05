#include "main.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - converts binary string to int
 * @b: ptr to string
 * Return: converted num or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = strlen(b);
	int pow_value = 1;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & '1')
			result += pow_value;
		pow_value *= 2;
	}
	return (result);
}
