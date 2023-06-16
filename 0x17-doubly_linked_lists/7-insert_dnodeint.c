#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: ptr to ptr to head node
 * @idx: index of new node to add
 * @n: data of new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = (*h);

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = *h;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	while (curr != NULL && cnt < idx)
	{
		if (cnt == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		cnt++;
	}
	return (NULL);
}
