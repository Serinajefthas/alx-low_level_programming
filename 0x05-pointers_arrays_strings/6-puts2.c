#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every second character of a string
 * @str: the pointer which points to string to be printed
 */
void puts2(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		if (str[i] % 2 == 0)
			printf("%d", str[i]);
		else if(i % 2 != 0)
			continue;
		else
		{
		}
	}
}	
