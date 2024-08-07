#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

	/**
	* print_listint - prints all the elements of listint_t list
	* @h: pointer to th list head
	* return: the number of nodes
	*/size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
