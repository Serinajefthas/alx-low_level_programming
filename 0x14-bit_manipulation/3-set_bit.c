#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets bit to 1 @ specific index
 * @n: ptr to binary num
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n |= (1UL << index))
		return (1);
	return (-1);
}
