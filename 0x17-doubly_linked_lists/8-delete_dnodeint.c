#include "lists.h"

/**
 * delete_dnodeint_at_index - exactly <--
 * @head: head
 * @index: index
 *
 * Return: 1 (Success), -1 (Failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}
