#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function to prints elements of linked list
 * @h: pointer to the list_t lists to be printed
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nodes_ = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes_++;
		h = h->next;
	}
	return (nodes_);
}
