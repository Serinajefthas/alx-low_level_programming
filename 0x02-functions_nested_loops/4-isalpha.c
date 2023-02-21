#include "main.h"

/**
 * _isalpha - check the code.
 * @c: character to check
 * Return: Always 0.
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
