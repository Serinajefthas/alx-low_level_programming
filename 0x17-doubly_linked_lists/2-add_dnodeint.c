#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of dlistint_t list
 * @head: pointer to pointer to the start of list
 * @n: value of node to add
 * Return: address to new node else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return new;
}
