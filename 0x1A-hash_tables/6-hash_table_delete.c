#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next, *curr;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		curr = (ht->array)[i];
		while (curr != NULL)
		{
			next = curr->next;
			free(curr);
			curr = next;
		}
	}

	free(ht);
}
