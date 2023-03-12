#include <stdio.h>

/**
 * main - multiplication of 2 args
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int result = argv[0] * argv[1];

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
		return (0);
	}
}
