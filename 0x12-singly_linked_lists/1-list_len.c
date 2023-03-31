#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns no. elements in list_t list
 * @h: pointer head that points to head node of list
 * Return: number bytes of list (size_t)
 */
size_t list_len(const list_t *h)
{
	int num_elements = 0;
	const list_t *curr = NULL;

	curr = h;
	while (curr != NULL)
	{
		num_elements++;
		curr = curr->next;
	}
	return (num_elements);
}
