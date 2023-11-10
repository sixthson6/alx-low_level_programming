#include "lists.h"

/**
 * sum_dlistint - sum ints in linkded list
 * @head: head
 *
 * Return: total
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int total = 0;

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
