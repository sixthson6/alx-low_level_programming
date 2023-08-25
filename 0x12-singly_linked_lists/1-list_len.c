#include "lists.h"

/**
 * list_len - number of element
 * @h: struct
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
