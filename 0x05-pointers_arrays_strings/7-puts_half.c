#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;

	int len = strlen(str);

	int midLen;

	if (len % 2 == 0)
		midLen = len / 2;
	else if (len % 2 != 0)
	{
		midLen = (len - 1) / 2;
		len = len - 1;
	}

	for (i = midLen; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
