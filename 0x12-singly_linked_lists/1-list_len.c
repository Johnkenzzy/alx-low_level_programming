#include <stdlib.h>
#include "lists.h"

	/**
	* list_len - counts number of elements in a list
	* @h: pointer to the list head
	* return: the number of elements in the list
	*/size_t list_len(const list_t *h)
{
	unsigned int count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
