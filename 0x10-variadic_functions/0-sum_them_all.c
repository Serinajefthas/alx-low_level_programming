#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all arg numbers
 * @n: number of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	va_list args_list;

	va_start(args_list, n);

	if (n <= 0)
		return (0);

	for (i = 0; i < n; i++)
		result += va_arg(args_list, int);

	va_end(args_list);
	return (result);
}
