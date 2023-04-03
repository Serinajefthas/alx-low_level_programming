#include <stdio.h>
#include "lists.h"

/**
 * listint_len - no. elements in list
 * @h: pointer to head of list
 * Return: len of list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;
	const listint_t *curr = NULL;

	curr = h;
	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}
