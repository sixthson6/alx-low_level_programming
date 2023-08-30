#include "lists.h"

/**
 * delete_nodeint_at_index - exactly <-
 * @head: head node
 * @index: count
 *
 * Return: 1 (Success) -1(Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current;
	listint_t *prev;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;
	count = 0;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count != index)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
