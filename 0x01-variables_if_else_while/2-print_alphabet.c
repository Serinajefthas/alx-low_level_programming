#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetStr [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	/*for (i = 0; i < strlen(alphabetStr); i++)
	{
		putchar(alphabetStr[i]);
	}*/
	for (char low = 'a'; low <= 'z'; low++)
		putchar(low);
		printf("\n");
	return (0);
}
