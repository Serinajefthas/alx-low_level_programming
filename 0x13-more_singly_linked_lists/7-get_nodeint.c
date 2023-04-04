#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns node @ specific index
 * @head: ptr to ptr of list
 * @index: index of node in list
 * Return: node at index or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
