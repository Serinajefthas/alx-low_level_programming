#include "main.h"

/**
 * _pow_recursion - calculates ans of x to pow y
 * @x: base number
 * @y: exponent
 * Return: result, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
