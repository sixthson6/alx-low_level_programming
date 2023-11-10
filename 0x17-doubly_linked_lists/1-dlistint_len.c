#include "lists.h"

/**
 * dlistint_len - traverse doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
