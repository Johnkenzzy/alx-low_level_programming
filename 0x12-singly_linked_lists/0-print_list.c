#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

	/**
	* print_list - prints all elements of a list
	* @h: pointer to the list head
	* return: the number of nodes in the list
	*/size_t print_list(const list_t *h)
{
	unsigned int count_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count_node++;
	}
	return (count_node);
}
