#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all data of list
 * @head: ptr to head of list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
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
