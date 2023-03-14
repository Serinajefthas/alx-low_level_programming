#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of 2 args
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;

	printf("%d\n", result);

	return (0);
}
