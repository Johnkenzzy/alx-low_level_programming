#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr_elem;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		curr_elem = ht->array[i];

		while (curr_elem)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", curr_elem->key, curr_elem->value);
			first = 0;
			curr_elem = curr_elem->next;
		}
	}

	printf("}\n");
}
