#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end list
 * @head: ptr to ptr start of list
 * @n: data to add to new node
 * Return: ref to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	new->prev = curr;
	return (new);
}
