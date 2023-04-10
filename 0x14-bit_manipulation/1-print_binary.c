#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - prints binary rep of a num
 * @n: num to convert
 */
void print_binary(unsigned long int n)
{
	int i, leading_zero = 1;

	for (i = sizeof(int) * 8 - 1; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			printf("1");
			leading_zero = 0;
		}
		else if (!leading_zero)
			printf("0");
	}
	if (leading_zero)
		printf("0");
}