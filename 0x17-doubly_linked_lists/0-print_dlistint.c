#include "lists.h"
/**
 * print_dlistint - prints data of doubly linked list
 * @h: head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *curr = NULL;

	curr = h;
	while (curr != NULL)
	{
		if (!curr)
			printf("Error: no data in node %ld\n", num_nodes);
		else
			printf("%d\n", curr->n);
		curr = curr->next;
		num_nodes++;
	}
	return (num_nodes);
}
