#include "hash_tables.h"


/**
 * shash_table_get - retrieves a value associated with a key from the sorted ht
 * @ht: the hash table to look into
 * @key: the key to search for
 *
 * Return: the value associated with the key, else NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *element;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	element = ht->array[index];

	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}

	return (NULL);
}


/**
 * shash_table_print - prints the sorted hash table
 * @ht: the hash table to be printed
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	int first;
	shash_node_t *element;

	if (!ht)
		return;

	element = ht->shead;
	first = 1;

	printf("{");
	while (element)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", element->key, element->value);
		first = 0;
		element = element->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: the hash table to be printed
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int first;
	shash_node_t *element;

	if (!ht)
		return;

	element = ht->stail;
	first = 1;

	printf("{");
	while (element)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", element->key, element->value);
		first = 0;
		element = element->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes the sorted hash table
 * @ht: the hash table to delete
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *element, *temp_elem;

	if (!ht)
		return;

	element = ht->shead;

	while (element)
	{
		temp_elem = element;
		element = element->snext;
		free(temp_elem->key);
		free(temp_elem->value);
		free(temp_elem);
	}

	free(ht->array);
	free(ht);
}
