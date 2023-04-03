#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print elements of listint_t list
 * @h: head pointer to list
 * Return: number of nodes(in bytes)
 */
size_t print_listint(const listint_t *h)
{
	int num_nodes = 0;
	const listint_t *current = NULL;

	if (h == NULL)
		return (0);

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
