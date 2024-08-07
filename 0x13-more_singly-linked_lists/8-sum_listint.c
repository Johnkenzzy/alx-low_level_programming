#include <stdlib.h>
#include "lists.h"

	/**
	* sum_listint - returns the sum of all the
	* data (n) of a listint_t linked list.
	*
	* @head: pointer to the head of the list
	*
	* Return: the sum of all the data (n), or 0 if the list is empty
	*/int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
