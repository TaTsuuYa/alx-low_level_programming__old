#include "lists.h"

/**
 * add_node - adds an element to the beginning
 * @head: address of first element
 * @str: str value of element
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (*head == NULL)
		*head = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

