#include "main.h"

/**
 * flip_bits - returns # bits need flip
 * to get from 1 num to other
 * @n: decimal num 1
 * @m: decimal num 2
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt;

	for (cnt = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			cnt++;
	}
	return (cnt);
}
