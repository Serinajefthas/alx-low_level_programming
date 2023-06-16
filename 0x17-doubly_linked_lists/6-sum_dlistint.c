#include "lists.h"

/**
 * sum_dlistint - adds all data of each node in linked list
 * @head: ptr to head of list
 * Return: result else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result += (head->n);
		head = head->next;
	}
	return (result);
}
