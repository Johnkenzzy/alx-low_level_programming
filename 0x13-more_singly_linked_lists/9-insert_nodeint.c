#include <stdlib.h>
#include "lists.h"

	/**
	* insert_nodeint_at_index - inserts a new node at a given position.
	* @head: double pointer to the head of the list
	* @idx: index of the list where the new node should
	* be added (starts at 0)
	*
	* @n: integer to be added to the new node
	*
	* Return: the address of the new node, or NULL if it failed
*/listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int current_index = 0;
	listint_t *new_node;
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current_node != NULL && current_index < idx)
	{
		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}

	if (current_index != idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node;
	previous_node->next = new_node;

	return (new_node);
}
