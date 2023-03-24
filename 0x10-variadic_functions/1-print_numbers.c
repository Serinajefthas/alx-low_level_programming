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

	if (n <= 0)
		return;
	if (separator == NULL)
		return;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_list);
}
