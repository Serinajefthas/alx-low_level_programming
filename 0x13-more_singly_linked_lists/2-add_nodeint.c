#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds new node start fo list
 * @head: pointer to pointer of start of list
 * @n: value of new node
 * Return: pointer to new node(ie address)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
