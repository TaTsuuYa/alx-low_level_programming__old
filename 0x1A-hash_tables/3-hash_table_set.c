#include "hash_tables.h"

/**
 * hash_table_set - adds elements to the ahs table
 * @ht: hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int ind, i;
	char *valdup, *keydup;

	if (ht == NULL || key == NULL || *key == 0 || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	valdup = strdup(value);
	if (valdup == NULL)
		return (0);

	keydup = strdup(key);
	if (keydup == NULL)
	{
		free(valdup);
		return (0);
	}

	ind = key_index((const unsigned char *)key, ht->size);
	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valdup;
			return (1);
		}
	}

	node->key = keydup;
	node->value = valdup;
	node->next = NULL;

	ht->array[ind] = node;

	return (1);
}
