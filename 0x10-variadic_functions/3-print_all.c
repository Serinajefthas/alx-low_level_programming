#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all types var, variadic func
 * @format: list types of args
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	int n = 0, i = 0;
	char *sep = ", ", *str;

	va_start(args_list, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
			sep = "";
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args_list, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args_list, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args_list, double), sep);
			break;
		case 's':
			str = va_arg(args_list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args_list);
}

