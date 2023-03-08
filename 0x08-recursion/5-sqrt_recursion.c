#include "main.h"
/**
 * _sqrt_simplify - function returns pow of number
 * @n: number to check
 * @y: estimate to compare multiplication pow
 * Return: sqrt root of n
 */
int _sqrt_simplify(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y > n)
		return (-1);
	return (_sqrt_simplify(n, y + 1));
}

/**
 * _sqrt_recursion - sqr root of a number
 * @n: number to root
 * Return: sqr root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_simplify(n, 0));
}

