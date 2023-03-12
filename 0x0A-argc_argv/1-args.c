#include <stdio.h>

/**
 * main - prints # arguments passed
 * @argc: number of args
 * @argv: strings passed in
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc -  1);
	return (0);
}
