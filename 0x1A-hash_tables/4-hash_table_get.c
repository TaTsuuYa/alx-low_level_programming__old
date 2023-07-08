#include "hash_tables.h"

/**
 * hash_table_get - gets the value
 * @ht: hash table
 * @key: the key we looking for
 *
 * Return: the value, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == 0)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[ind];

	while (node)
	{
		if (strcmp(node->key, (char *)key) != 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}