#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list w double pointer
 * @head: ptr to ptr of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
