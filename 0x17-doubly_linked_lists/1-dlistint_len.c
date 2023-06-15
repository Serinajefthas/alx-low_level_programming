#include "lists.h"

/**
 * dlistint_len - returns length of list
 * @h: head ptr to start of list
 * Return: length od doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *curr = NULL;

	curr = h;
	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}
