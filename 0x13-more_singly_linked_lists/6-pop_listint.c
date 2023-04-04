#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node and returns it value
 * @head: ptr to ptr of head of list
 * Return: value of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
		return (0);
	temp = (*head);
	result = temp->n;
	(*head) = (*head)->next;
	free(temp);

	return (result);
}
