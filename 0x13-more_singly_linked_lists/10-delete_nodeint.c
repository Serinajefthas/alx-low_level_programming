#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delet node @ specific index in list
 * @head: ptr to ptr to list
 * @index: index of node to delete
 * Return: 1 (success), -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
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
		if (i == index - 1)
		{
			temp = curr->next;
			curr->next = temp->next;
			free(temp);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
