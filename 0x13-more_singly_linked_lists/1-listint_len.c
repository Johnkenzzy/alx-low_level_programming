#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

	/**
	* listint_len - checkes then number of elements in listint_t list
	* @h: pointer to th list head
	* return: the number of elements
	*/size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
