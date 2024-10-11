#include "hash_tables.h"


/**
 * key_index - generates an index for a key within the hash table size
 * @key: the key to generate an index for
 * @size: the size of the array of the hash table
 *
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key);
	key_index = key_index % size;

	return (key_index);
}
