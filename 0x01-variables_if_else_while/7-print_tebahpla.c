#include <stdio.h>
/**
 * Main - entry point
 * prints lowercase letters in reverse
 * return 0
 */
int main(void)
{
	int n;

	char alphabet [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

	for (n = 26; n >= 0; n--)
	{
		putchar(alphabet[n]);
	}
	putchar('\n');
	return (0);
}
