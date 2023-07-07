#include "hash_tables.h"

/**
 * key_index - outputs the index
 * @key: the key element
 * @size: the size of the hash table
 *
 * Return: hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
