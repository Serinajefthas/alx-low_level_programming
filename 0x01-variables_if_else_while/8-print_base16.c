#include <stdio.h>
/**
 * main - entry point
 * print hexadeciaml numbers w base 16
 * return 0
 */
int main(void)
{
	/**ascii representation */
	for (int n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (int m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
