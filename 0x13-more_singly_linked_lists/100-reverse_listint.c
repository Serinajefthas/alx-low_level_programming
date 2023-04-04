#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: ptr to ptr to list
 * Return: ptr to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (*head == NULL)
		return (NULL);
	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;
	return (prev);
}
