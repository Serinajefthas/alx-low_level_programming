#include "main.h"

/**
 * prime_pow - function that returns the power of number
 *@n: original number
 *@y: counter to compare multiplication
 *Return: square root
 */
int prime_pow(int n, int y)
{
	int cnt = 0;

	if (y <= n)
	{
		if (n % y == 0)
			cnt++;
		return (cnt + prime_pow(n, y + 1));
	}
	return (cnt);
}

/**
 * is_prime_number - checks if num is prime
 * @n: n number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (prime_pow(n, 1) == 2)
		return (1);
	else
		return (0);
}
