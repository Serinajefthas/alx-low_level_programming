#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
	int i;
	int j;

	for (i = 0; i < strlen(alphabet); i++)
	{
		putchar(alphabet[i]);
	}
	for (j = 0; j < strlen(alphabet); j++)
	{
		alphabet[j] = toupper(alphabet[j]);
		putchar(alphabet[j]);
	}
	putchar('\n');
	return (0);
}
