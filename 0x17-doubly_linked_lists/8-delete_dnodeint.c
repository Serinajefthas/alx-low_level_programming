#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given position
 * @head: ptr to ptr to head of linked list
 * @index: index of node to delete
 * Return: 1 on success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cnt = 0;
	dlistint_t *curr = (*head);

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = curr->next;
		if (curr->next != NULL)
			curr->->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr != NULL)
	{
		if (cnt == index - 1)
		{
			curr->prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}
		curr = curr->next;
		cnt++;
	}
	return (-1);
}
