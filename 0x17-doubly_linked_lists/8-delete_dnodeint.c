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
	listint_t *new;
	listint_t *curr = (*head);

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(curr);
		return (1);
	}
	while (curr != NULL)
	{
		if (cnt == index - 1)
		{
			new = curr->next;
			curr->next = new->next;
			free(new);
			return (1);
		}
		curr = curr->next;
		new++;
	}
	return (-1);
}
