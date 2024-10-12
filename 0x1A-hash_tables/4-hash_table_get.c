#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key from the hash table
 * @ht: the hash table to look into
 * @key: the key to search for
 *
 * Return: the value associated with the key, else NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_elem;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_elem = ht->array[index];

	while (current_elem)
	{
		if (strcmp(current_elem->key, key) == 0)
			return (current_elem->value);
		current_elem = current_elem->next;
	}

	return (NULL);
}

