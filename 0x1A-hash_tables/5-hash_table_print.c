#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	char pr = 0;

	printf("{");
	if (ht == NULL)
	{
		printf("}\n");
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (pr)
				printf(", ");
			print_el(curr);
			curr = curr->next;
			pr = 1;
		}
	}

	printf("}\n");
}

/**
 * print_el - prints the element
 *
 * @el: hash node
 */
void print_el(hash_node_t *el)
{
	printf("'%s': '%s'", el->key, el->value);
}
