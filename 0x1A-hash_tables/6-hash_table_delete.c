#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_elem, *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current_elem = ht->array[i];
		while (current_elem != NULL)
		{
			temp = current_elem->next;
			free(current_elem->key);
			free(current_elem->value);
			free(current_elem);
			current_elem = temp;
		}
	}

	free(ht->array);
	free(ht);
}
