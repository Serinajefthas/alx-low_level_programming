#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_nodeint_at_index - insert node @ specific index
 * @head: ptr to ptr of head of list
 * @idx: index
 * @n: data of the node to insert
 * Return: new node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr = (*head);

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (curr != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		i++;
	}
	return (new);
}
