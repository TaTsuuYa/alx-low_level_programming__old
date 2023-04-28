#include "lists.h"

/**
 * sum_listint - sums the data of a listint_t
 * @head: pointer to the first eleent
 *
 * Retuen: sum of a listint_t
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}

