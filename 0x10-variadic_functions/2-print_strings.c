#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings variadic func
 * @separator: str separator
 * @n: number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args_list;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_list, char *);
		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_list);
}
