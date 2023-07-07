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

  htt = malloc(sizeof(hash_table_t *) * size);
  if (htt == NULL)
    return (NULL);
