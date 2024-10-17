#include "hash_tables.h"


/**
 * shash_table_create - creates a sorted new hash table
 * @size: the size of the new hash table created
 *
 * Return: a pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - adds a sorted element to the hash table
 * @ht: the hash table where the key/value element will be added or updated
 * @key: the key which must not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *element, *current_elem, *prev_elem;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	element = screate_element(key, value);
	if (!element)
	{
		sfree_element(element);
		return (0);
	}
	element->next = ht->array[index];
	ht->array[index] = element;
	current_elem = ht->shead;
	prev_elem = NULL;
	while (current_elem && strcmp(current_elem->key, key) < 0)
	{
		prev_elem = current_elem;
		current_elem = current_elem->snext;
	}
	if (!prev_elem)
	{
		element->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = element;
		ht->shead = element;
	}
	else
	{
		element->snext = prev_elem->snext;
		if (prev_elem->snext)
			prev_elem->snext->sprev = element;
		prev_elem->snext = element;
		element->sprev = prev_elem;
	}
	if (!element->snext)
		ht->stail = element;

	return (1);
}



/**
 * screate_element - creates a new element to add to the hash table
 * @key: the key of the new element
 * @value: the value of the new element
 *
 * Return: a pointer to the new element node, or NULL on failure
 */
shash_node_t *screate_element(const char *key, const char *value)
{
	shash_node_t *element = malloc(sizeof(shash_node_t));

	if (element == NULL)
		return (NULL);

	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (NULL);
	}

	element->value = strdup(value);
	if (element->value == NULL)
	{
		free(element->key);
		free(element->value);
		free(element);
		return (NULL);
	}

	element->next = NULL;
	element->sprev = NULL;
	element->snext = NULL;

	return (element);
}
