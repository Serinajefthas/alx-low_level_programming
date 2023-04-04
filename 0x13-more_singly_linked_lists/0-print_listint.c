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
	size_t num_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		num_nodes++;
		current = current->next;
	}
	return (num_nodes);
}
