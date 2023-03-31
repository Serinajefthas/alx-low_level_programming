#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: head pointer to list
 * Return: number of nodes (in bytes -size_t)
 */
size_t print_list(const list_t *h)
{
	int i, num_nodes = 0;

	const list_t *current = NULL;

	current = h;/*creates a 'node',just in this case called list_t*/
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
