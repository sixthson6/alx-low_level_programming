#include "lists.h"

/**
 * get_dnodeint_at_index - <- <-
 * @head: head of list
 * @index: idx
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		current = current->next;
		count++;
		if (count == index)
			return (current);
	}
	return (NULL);
}
