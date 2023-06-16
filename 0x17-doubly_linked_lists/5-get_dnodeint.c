#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at nth index of linked list
 * @head: ptr to linked list
 * @index: index of node to find
 * Return: node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	while (head != NULL && cnt < index)
	{
		head = head->next;
		cnt++;
	}
	return (head);
}
