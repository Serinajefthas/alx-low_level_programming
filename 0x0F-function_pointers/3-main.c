#include "function_pointers.h"
#include <stdio.h>

/**
 * main - operation
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(argv[2] == "+" || argv[2] == "-" || argv[2] == "*" ||
		argv[2] == "/" || argv[2] == "%") || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == "0")
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
