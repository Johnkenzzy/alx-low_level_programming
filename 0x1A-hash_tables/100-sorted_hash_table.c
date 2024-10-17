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
		sfree_element(temp_elem);
	}

	free(ht->array);
	free(ht);
}


/**
 * sfree_element - free elements of the sorted hash table
 * @element: element to be freed
 *
 * Return: nothing
 */
void sfree_element(shash_node_t *element)
{
	free(element->key);
	free(element->value);
	free(element);
}
