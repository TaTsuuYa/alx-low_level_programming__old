#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 *
 * Return: pointer to the created table, or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htt;
	hash_node_t *arr;
	unsigned long int i;

	htt = malloc(sizeof(hash_table_t) * size);
	if (htt == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		htt->array[i] = NULL;

	htt->size = size;
	htt->array = &arr;

	return (htt);
}
