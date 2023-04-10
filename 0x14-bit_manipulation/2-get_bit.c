#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns bit @ specific index
 * @n: decimal num
 * @index: position
 * Return: value of bit(1/0) else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
