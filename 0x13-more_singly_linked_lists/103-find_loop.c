#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: ptr to list head
 * Return: starting node of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (*head == NULL)
		return (NULL);
	while (slow && fast && fast->)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}
