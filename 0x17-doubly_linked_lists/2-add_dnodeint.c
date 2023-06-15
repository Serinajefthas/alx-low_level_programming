#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of dlistint_t list
 * @head: pointer to pointer to the start of list
 * @n: value of node to add
 * Return: address to new node else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	unsigned int len;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	head->prev = new;
	*head = new;

	return (*head);
}	
