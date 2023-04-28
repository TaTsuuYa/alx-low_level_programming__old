#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at @index
 * @head: pointer to the address of the first element
 * @index: indes of deleted element
 *
 * Return: 1 if success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}

