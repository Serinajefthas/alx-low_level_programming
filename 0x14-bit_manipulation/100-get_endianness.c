#include "main.h"

/**
 * get_endianness -checks the endianness(if ints represented
 * from L->R or from RHS->LHS)
 * Return: 1 if little endian, 0 if big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *)&i;

	return ((int)*ch);
}
