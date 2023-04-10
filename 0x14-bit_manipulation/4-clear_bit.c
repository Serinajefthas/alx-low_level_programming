#include "main.h"

/**
 * clear_bit - sets value bit to 0 @ specific index
 * @n: ptr to binary num
 * @index: position
 * Return: 1 (success) or -1(failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
