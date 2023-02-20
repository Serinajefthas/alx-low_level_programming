#include <stdio.h>
/**
 * main - Entry point
 * print alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	/* ascii values corresp to letters */
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
