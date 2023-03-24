#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints al no.s variadic func
 * @separator: string to be printed between no.s
 * @n: number ints
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args_list;

	char *separator_cpy;

	if (n <= 0)
		return;
	if (separator == NULL)
		separator_cpy = " ";

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(args_list, int));
		else if (i != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(args_list, int), separator);
		else if (i != (n - 1) && separator == NULL)
			printf("%d%s", va_arg(args_list, int), separator_cpy);
	}
	va_end(args_list);
}
