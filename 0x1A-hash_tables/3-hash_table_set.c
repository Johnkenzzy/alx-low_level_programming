#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table where the key/value element will be added or updated
 * @key: the key which must not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element, *current_elem;
	unsigned long int index;
	char *value_dup;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	element = create_element(key, value_dup);
	if (element == NULL)
	{
		free(value_dup);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	current_elem = ht->array[index];

	while (current_elem)
	{
		if (strcmp(current_elem->key, key) == 0)
		{
			free(current_elem->value);
			current_elem->value = value_dup;
			free(element);
			return (1);
		}
		current_elem = current_elem->next;
	}

	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}

/**
 * create_element - creates a new element to add to the hash table
 * @key: the key of the new element
 * @value: the value of the new element
 *
 * Return: a pointer to the new element node, or NULL on failure
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element = malloc(sizeof(hash_node_t));

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
		free(element);
		return (NULL);
	}

	element->next = NULL;
	return (element);
}
