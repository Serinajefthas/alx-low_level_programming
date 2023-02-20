#include <stdio.h>
/**
 * Main - entry point
 * prints all single digits only using putchar
 * return 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48); /** ascii*/
	}
	putchar('\n');
	return (0);
}
