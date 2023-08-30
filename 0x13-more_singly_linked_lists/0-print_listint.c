#include "lists.h"

/**
 * print_listint - print elements of linked list
 * @h: head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr_node;

	if (h == NULL)
		return (-1);

	curr_node = h;

	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		curr_node = curr_node->next;
		count++;
	}
	return (count);
}
