#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - addition of 2 args
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
