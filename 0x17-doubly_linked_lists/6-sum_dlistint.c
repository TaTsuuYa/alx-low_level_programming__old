#include "lists.h"

/**
 * sum_dlistint - calculates the sum of node's data
 * @head: head
 *
 * Return: sum of nodes' data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
