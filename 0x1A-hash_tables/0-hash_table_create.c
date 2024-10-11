#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 * @size: the size of the new hash table created
 *
 * Return: a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * table->size);
	if ((table->array) == NULL)

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
