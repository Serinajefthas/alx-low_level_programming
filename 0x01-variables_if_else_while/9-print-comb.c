#include <stdio.h>
/**
 * Main - Entry point
 * Description: prints all combinations of single digit nos in ascending order
 * ie 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 (exactly that)
 * Return: always 0
 */
int main(void)
{
	for (int n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
