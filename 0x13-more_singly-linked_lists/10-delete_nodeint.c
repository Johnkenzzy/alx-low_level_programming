#include <stdlib.h>
#include "lists.h"

	/**
	* delete_nodeint_at_index - deletes the node at
	* index of a listint_t linked list.
	*
	* @head: double pointer to the head of the list
	* @index: index of the node that should be deleted (starts at 0)
	*
	* Return: 1 if it succeeded, -1 if it failed
	*/int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && current_index < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
