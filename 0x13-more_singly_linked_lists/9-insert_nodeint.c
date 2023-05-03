#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a listint_t at @idx
 * @head: pointer to the address of first node
 * @idx: insert position
 * @n: data;
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		if (temp->next == NULL)
			return (add_nodeint_end(head, n));
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

/**
 * add_nodeint - adds a node to the beginning
 * @head: pointer to address of forst element
 * @n: value of node
 *
 * Return: pointer to new list, NULL otheriwse
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

