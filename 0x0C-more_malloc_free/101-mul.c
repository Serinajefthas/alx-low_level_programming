#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - multiply 2 numbers
 * @argc: args count
 * @argv: args array
 * Return: int ans
 */
int main(int argc, char *argv[])
{
	unsigned long result;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]) || !isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", result);
	return (0);
}
