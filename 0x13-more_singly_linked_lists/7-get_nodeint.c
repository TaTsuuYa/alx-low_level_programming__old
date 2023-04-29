#include "lists.h"

/**
 * get_nodeint_at_index - look for the node number @index
 * @head: pointer to first element
 * @index: node looked for
 *
 * Return: pointer to node if found, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = head;
	for (ind = 0; ind < index; ind++)
		temp = temp->next;

	return (temp);
}

